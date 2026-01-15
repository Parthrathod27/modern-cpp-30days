#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*
Range-based for loop = Modern C++ iteration

WHY?
- Index handling ki zarurat nahi
- Cleaner & readable
- STL ke saath best
*/

/*
SYNTAX:
for (datatype element : container) {
    // use element
}
*/

int main() {

    // -------- VECTOR ITERATION --------

    vector<int> nums = {10, 20, 30, 40};

    /*
    Traditional loop:
    - index manage karna padta hai
    - out of bound ka risk
    */

    // Modern range-based loop
    for (int x : nums) {
        // x = current element
        cout << x << " ";
    }

    cout << endl;

    // -------- MAP ITERATION --------

    map<int, string> mp;
    mp[1] = "One";
    mp[2] = "Two";

    /*
    Map ka element = pair<const key, value>
    isliye auto use karte hain
    */

    for (auto p : mp) {
        // p.first  = key
        // p.second = value
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}

