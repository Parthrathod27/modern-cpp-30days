// ============================================================
// DAY 09 — std::unique_ptr (RAII + Ownership + Move Semantics)
// ============================================================
//
// RULE 0:
// Resource acquire in constructor
// Resource release in destructor
// (This is RAII)
//
// ============================================================

#include <iostream>
#include <memory>
using namespace std;

// ============================================================
// 1️⃣ RESOURCE CLASS (RAII BASE)
// ============================================================
//
// Constructor  -> Resource acquire
// Destructor   -> Resource release
//
class Resource {
public:
    Resource() {
        cout << "[CTOR] Resource acquired\n";
    }

    void work() {
        cout << "[WORK] Resource is working\n";
    }

    ~Resource() {
        cout << "[DTOR] Resource released\n";
    }
};

// ============================================================
// 2️⃣ FUNCTION TAKING unique_ptr (OWNERSHIP TRANSFER)
// ============================================================
//
// unique_ptr passed by value
// → ownership MUST be moved
//
void consume(unique_ptr<Resource> r) {
    r->work();
    cout << "[FUNC] Ownership inside function\n";
}

// ============================================================
// 3️⃣ MAIN
// ============================================================
int main() {

    // ========================================================
    // A️⃣ RAW POINTER PROBLEM (DO NOT USE)
    // ========================================================
    /*
    Resource* r = new Resource();
    r->work();
    delete r; // easy to forget
    */

    // ========================================================
    // B️⃣ unique_ptr CREATION (SAFE)
    // ========================================================
    unique_ptr<Resource> p1 = make_unique<Resource>();
    p1->work();

    // ========================================================
    // C️⃣ COPY IS NOT ALLOWED
    // ========================================================
    /*
    unique_ptr<Resource> p2 = p1;   // ❌ ERROR
    Reason:
    unique_ptr allows ONLY ONE owner
    */

    // ========================================================
    // D️⃣ MOVE OWNERSHIP
    // ========================================================
    unique_ptr<Resource> p2 = move(p1);

    // After move, p1 becomes nullptr
    if (p1 == nullptr) {
        cout << "[INFO] p1 is null after move\n";
    }

    p2->work();

    // ========================================================
    // E️⃣ PASSING unique_ptr TO FUNCTION
    // ========================================================
    consume(move(p2));

    // After move, p2 becomes nullptr
    if (!p2) {
        cout << "[INFO] p2 is null after function call\n";
    }

    // ========================================================
    // F️⃣ RESET (MANUAL RELEASE)
    // ========================================================
    unique_ptr<Resource> p3 = make_unique<Resource>();
    p3.reset(); // Destructor called immediately

    // ========================================================
    // G️⃣ RELEASE (DANGEROUS, AVOID)
    // ========================================================
    unique_ptr<Resource> p4 = make_unique<Resource>();
    Resource* raw = p4.release(); // ownership lost
    delete raw;                   // manual delete needed

    // ========================================================
    // H️⃣ unique_ptr WITH ARRAY
    // ========================================================
    unique_ptr<int[]> arr = make_unique<int[]>(5);

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ========================================================
    // I️⃣ CUSTOM DELETER
    // ========================================================
    auto deleter = [](Resource* r) {
        cout << "[CUSTOM DELETE]\n";
        delete r;
    };

    unique_ptr<Resource, decltype(deleter)> p5(new Resource(), deleter);

    // ========================================================
    // J️⃣ SCOPE END
    // ========================================================
    // All remaining unique_ptr objects
    // automatically destroy their resources

    return 0;
}

/*
============================================================
FINAL SUMMARY (CODED NOTES)
============================================================

unique_ptr RULES:
1. Single owner only
2. Copy ❌
3. Move ✅
4. Automatic delete (RAII)
5. Prefer make_unique
6. Default smart pointer in modern C++

INTERVIEW ONE-LINERS:
- "unique_ptr expresses exclusive ownership"
- "It enforces move semantics"
- "It prevents memory leaks by design"

WHEN TO USE:
- One owner
- No sharing
- Strong safety

============================================================
*/

