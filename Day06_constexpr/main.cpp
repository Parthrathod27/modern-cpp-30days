// Day 06 - Modern C++
// Topic: constexpr (Compile-time computation)

#include <iostream>
using namespace std;

/*
    constexpr function:
    - Agar input compile-time constant ho
      → function compile time par evaluate hota hai
    - Warna run time par
*/
constexpr int square(int x) {
    return x * x;
}

/*
    Compile-time factorial using recursion
    - C++14+ me constexpr functions me loops & recursion allowed
*/
constexpr int factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}

int main() {

    // constexpr variable
    // Compiler ko value pehle se pata hoti hai
    constexpr int a = 5;

    // Compile-time evaluation
    constexpr int sq = square(a);        // calculated at compile time
    constexpr int fact = factorial(a);   // calculated at compile time

    // Runtime value
    int x;
    cin >> x;

    // Runtime evaluation (same constexpr function)
    int runtimeSquare = square(x);

    /*
        Key point:
        - constexpr function ek hi hota hai
        - Input decide karta hai compile-time ya runtime
    */

    cout << "Compile-time square: " << sq << endl;
    cout << "Compile-time factorial: " << fact << endl;
    cout << "Runtime square: " << runtimeSquare << endl;

    return 0;
}

/*
    =========================
    SUMMARY (Sticky Notes):
    =========================

    1. constexpr = compile-time computation
    2. Better optimization & safety
    3. Same function works for:
       - Compile time
       - Run time
    4. Widely used in:
       - Template programming
       - if constexpr
       - Performance-critical systems
*/

