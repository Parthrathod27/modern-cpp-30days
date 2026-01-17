// Day 07 - Modern C++
// Topic: Structured Bindings (C++17)

#include <iostream>
#include <tuple>
#include <map>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {

    // =========================
    // 1️⃣ Structured Binding with pair
    // =========================
    pair<int, int> p = {10, 20};

    // x gets p.first, y gets p.second
    auto [x, y] = p;

    cout << x << " " << y << endl;

    // =========================
    // 2️⃣ Structured Binding with tuple
    // =========================
    tuple<int, double, string> t = {1, 3.14, "C++"};

    // a, b, c unpack tuple values
    auto [a, b, c] = t;

    cout << a << " " << b << " " << c << endl;

    // =========================
    // 3️⃣ Structured Binding with map
    // =========================
    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";

    // key, value unpack directly
    for (auto &[key, value] : mp) {
        cout << key << " -> " << value << endl;
    }

    // =========================
    // 4️⃣ Structured Binding with struct
    // =========================
    Point pt = {5, 7};

    // Unpack public members
    auto [px, py] = pt;

    cout << px << " " << py << endl;

    return 0;
}

/*
    =========================
    SUMMARY (Sticky Notes):
    =========================

    1. Structured bindings introduced in C++17
    2. Used with pair, tuple, map, struct
    3. Improves readability
    4. Reduces boilerplate code
    5. Very common in STL loops
*/

