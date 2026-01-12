#include <iostream>
#include <memory>

using namespace std;

// Function overloaded with int
void check(int x) {
    cout << "check(int) called\n";
}

// Function overloaded with pointer
void check(int* ptr) {
    cout << "check(int*) called\n";
}

int main() {

    cout << "Using NULL:\n";
    // NULL is usually defined as 0 (integer)
    // This may call check(int) instead of pointer version
    check(NULL);

    cout << "\nUsing nullptr:\n";
    // nullptr is a true null pointer literal (type-safe)
    check(nullptr);

    // Raw pointer example
    int* p = nullptr;
    if (p == nullptr) {
        cout << "\nRaw pointer is null\n";
    }

    // Smart pointer example
    unique_ptr<int> sptr = nullptr;
    if (!sptr) {
        cout << "Smart pointer is empty\n";
    }

    return 0;
}

