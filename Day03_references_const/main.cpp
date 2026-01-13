#include <iostream>
using namespace std;

/*
====================================================
DAY 03: REFERENCES & CONST CORRECTNESS (MODERN C++)
====================================================

This file explains:
1. What references are
2. Why pass by reference is better than pass by value
3. What const correctness means
4. How const improves safety and performance

----------------------------------------------------
KEY IDEA:
If a function does NOT need to modify data,
always use `const &`
----------------------------------------------------
*/


/*
-----------------------------
PASS BY VALUE
-----------------------------
- A copy of the variable is passed
- Changes inside the function do NOT affect the original variable
- Extra copy = extra cost
*/
void passByValue(int x) {
    x = 100;   // modifies only the local copy
}


/*
-----------------------------
PASS BY REFERENCE
-----------------------------
- No copy is made
- Function works on the original variable
- Changes are reflected outside
*/
void passByReference(int& x) {
    x = 100;   // modifies the original variable
}


/*
-----------------------------
CONST REFERENCE
-----------------------------
- No copy (efficient)
- Data cannot be modified (safe)
- Most preferred way to pass read-only data
*/
void printValue(const int& x) {
    // x = 50;  // ❌ NOT allowed (x is const)
    cout << "Value: " << x << endl;
}


/*
-----------------------------
CONST MEMBER FUNCTION
-----------------------------
- Guarantees that the function will NOT modify object state
- Can be called on const objects
*/
class Demo {
private:
    int value;

public:
    Demo(int v) : value(v) {}

    int getValue() const {
        // value = 20;  // ❌ NOT allowed in const function
        return value;
    }
};


int main() {

    /*
    -----------------------------
    REFERENCE BASICS
    -----------------------------
    - Reference is an alias (another name) of a variable
    - Cannot be NULL
    - Cannot be re-bound
    */
    int a = 10;
    int& ref = a;

    ref = 20;   // modifies `a`
    cout << "a after modifying ref: " << a << endl;


    /*
    -----------------------------
    PASS BY VALUE VS REFERENCE
    -----------------------------
    */
    int b = 10;

    passByValue(b);
    cout << "After passByValue: " << b << endl;  // unchanged

    passByReference(b);
    cout << "After passByReference: " << b << endl;  // modified


    /*
    -----------------------------
    CONST REFERENCE USAGE
    -----------------------------
    */
    printValue(b);


    /*
    -----------------------------
    CONST MEMBER FUNCTION
    -----------------------------
    */
    Demo d(50);
    cout << "Demo value: " << d.getValue() << endl;

    return 0;
}

/*
====================================================
SUMMARY (INTERVIEW READY)
====================================================

1. References avoid unnecessary copies
2. const ensures data safety
3. const member functions guarantee read-only behavior
4. Prefer `const &` for function parameters
5. This leads to safer, faster, and cleaner C++ code

====================================================
*/

