#include <iostream>
using namespace std;

/*
enum class = modern C++ enum

WHY?
- Old enum int me convert ho jata tha (unsafe)
- Name conflict hota tha
- enum class in sab problems ko solve karta hai

FEATURES:
1. Strongly typed
2. No implicit int conversion
3. Scope ke andar rehta hai
*/

enum class OrderType {
    Buy,   // value sirf OrderType::Buy
    Sell   // value sirf OrderType::Sell
};

/*
Function sirf OrderType accept karega
Galat type ya int pass nahi ho sakta
→ safer API
*/
void placeOrder(OrderType type) {

    // Comparison bhi scoped hota hai
    if (type == OrderType::Buy) {
        cout << "Buy Order\n";
    } else {
        cout << "Sell Order\n";
    }
}

int main() {

    // Correct usage
    OrderType order = OrderType::Buy;

    // ❌ Ye allowed nahi:
    // OrderType order = 0;
    // order == Buy;

    placeOrder(order);

    return 0;
}

