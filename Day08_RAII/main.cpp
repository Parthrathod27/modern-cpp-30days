// =====================================================
// DAY 08 — RAII (Resource Acquisition Is Initialization)
// =====================================================
//
// RAII ka matlab:
// "Resource ki lifetime = Object ki lifetime"
//
// Agar object bana → resource acquire
// Agar object destroy hua → resource release
//
// Resource ho sakta hai:
// - Memory
// - File
// - Lock / Mutex
//
// Is file me hum teen cheeze cover kar rahe hain:
// 1. WITHOUT RAII (problem)
// 2. WITH RAII (solution)
// 3. Why RAII is mandatory in Modern C++
//
// Is file ko sirf compile + run karo,
// comments hi poora explanation hain.
//

#include <iostream>
#include <fstream>
using namespace std;

// =====================================================
// 1️⃣ WITHOUT RAII (BAD DESIGN)
// =====================================================
//
// Problem:
// - Resource manually manage ho raha hai
// - Exception aaye to cleanup nahi hota
//

void withoutRAII() {
    ofstream file;
    file.open("without_raii.txt");

    // Agar yahan exception ya early return hua
    // to file.close() kabhi call nahi hoga
    // → RESOURCE LEAK

    file << "This file may not close properly\n";

    // Developer ko yaad rakhna padega
    file.close();
}

// =====================================================
// 2️⃣ WITH RAII (GOOD DESIGN)
// =====================================================
//
// Rule:
// - Resource constructor me lo
// - Resource destructor me chhodo
//

class FileRAII {
private:
    ofstream file;   // RESOURCE as class member

public:
    // Constructor → resource acquire
    FileRAII(const string& filename) {
        file.open(filename);
        cout << "[RAII] Constructor: File opened\n";
    }

    // Resource ka use
    void write(const string& text) {
        file << text << endl;
    }

    // Destructor → resource release
    ~FileRAII() {
        cout << "[RAII] Destructor: File closed\n";
        file.close();
    }
};

// =====================================================
// 3️⃣ MEMORY MANAGEMENT WITHOUT RAII
// =====================================================
//
// new / delete ka manual headache
//

void memoryWithoutRAII() {
    int* p = new int(10);

    // Agar yahan exception aaye
    // delete p; kabhi execute nahi hoga
    // → MEMORY LEAK

    cout << *p << endl;
    delete p;
}

// =====================================================
// 4️⃣ MEMORY MANAGEMENT WITH RAII
// =====================================================
//
// Resource = memory
//

class IntRAII {
private:
    int* ptr;

public:
    // Constructor → memory acquire
    IntRAII(int value) {
        ptr = new int(value);
        cout << "[RAII] Memory allocated\n";
    }

    int get() const {
        return *ptr;
    }

    // Destructor → memory release
    ~IntRAII() {
        delete ptr;
        cout << "[RAII] Memory deallocated\n";
    }
};

// =====================================================
// 5️⃣ MAIN FUNCTION (LIFETIME DEMO)
// =====================================================

int main() {

    cout << "\n--- WITHOUT RAII ---\n";
    withoutRAII();

    cout << "\n--- WITH RAII (File) ---\n";
    {
        // Scope start
        FileRAII f("with_raii.txt");
        f.write("RAII ensures automatic cleanup");
    }
    // Scope end → destructor called automatically

    cout << "\n--- WITH RAII (Memory) ---\n";
    {
        IntRAII obj(42);
        cout << "Value: " << obj.get() << endl;
    }
    // Scope end → destructor called automatically

    return 0;
}

/*
=====================================================
FINAL RAII TAKEAWAYS (CODE RULES):
=====================================================

1. RAII = resource tied to object lifetime
2. Constructor → acquire resource
3. Destructor  → release resource
4. Never call destructor manually
5. Avoid raw new/delete in main
6. Smart pointers are RAII wrappers
7. Modern C++ WITHOUT RAII is WRONG C++

INTERVIEW ONE-LINER:
"RAII guarantees exception-safe resource management
 by binding resource lifetime to object lifetime."
*/

