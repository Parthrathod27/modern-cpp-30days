#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Simple function to demonstrate auto with return type
int add(int a, int b) {
    return a + b;
}

int main() {

    // 1. auto with basic variables
    auto x = 10;        // int
    auto y = 3.14;      // double
    auto z = 'A';       // char

    cout << "Basic auto variables:\n";
    cout << x << " " << y << " " << z << "\n\n";

    // 2. auto with const and reference
    int value = 42;
    const int constValue = 100;

    auto a = value;          // int
    auto b = constValue;     // int (const removed)
    auto& c = value;         // int&
    const auto d = value;    // const int

    cout << "Const & reference behavior:\n";
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << "\n\n";

    // 3. auto with function return type
    auto result = add(5, 7); // int
    cout << "Function return with auto: " << result << "\n\n";

    // 4. auto with STL vector and iterators
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "Iterating vector using auto iterator:\n";
    for (auto it = numbers.begin(); it != numbers.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n\n";

    // 5. auto with range-based for loop
    cout << "Range-based loop with auto:\n";
    for (auto num : numbers) {
        cout << num << " ";
    }
    cout << "\n\n";

    // 6. auto with map (key-value pairs)
    map<int, string> data;
    data[1] = "Order";
    data[2] = "Trade";

    cout << "Iterating map using auto:\n";
    for (auto it = data.begin(); it != data.end(); ++it) {
        cout << it->first << " -> " << it->second << "\n";
    }

    return 0;
}
