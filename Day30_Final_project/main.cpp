#include <iostream>
#include <vector>
#include <memory>
#include <thread>
#include <mutex>
using namespace std;

/*
====================================================
DAY 30 — MINI ORDER MANAGEMENT SYSTEM
====================================================

This project simulates a very basic trading system.

C++ concepts used:
------------------
✔ enum class (strong typing)
✔ OOP (Order class)
✔ RAII (automatic cleanup)
✔ unique_ptr (exclusive ownership)
✔ STL containers
✔ mutex (thread safety)
✔ multithreading

====================================================
*/

// Strongly typed order side
enum class OrderType {
    BUY,
    SELL
};

// Order class (OOP + RAII)
class Order {
private:
    int id;
    OrderType type;
    double price;
    int quantity;

public:
    Order(int id, OrderType type, double price, int quantity)
        : id(id), type(type), price(price), quantity(quantity) {}

    void print() const {
        cout << "Order ID: " << id
             << " | Type: " << (type == OrderType::BUY ? "BUY" : "SELL")
             << " | Price: " << price
             << " | Qty: " << quantity << endl;
    }
};

// OrderBook manages all orders
class OrderBook {
private:
    vector<unique_ptr<Order>> orders; // unique ownership
    mutex mtx; // protects shared resource

public:
    // Thread-safe add order
    void addOrder(unique_ptr<Order> order) {
        lock_guard<mutex> lock(mtx); // RAII lock
        orders.push_back(move(order));
    }

    // Print all orders
    void printOrders() {
        lock_guard<mutex> lock(mtx);
        for (const auto& order : orders) {
            order->print();
        }
    }
};

// Function executed by threads
void placeOrders(OrderBook& book, int startId) {
    for (int i = 0; i < 3; i++) {
        auto order = make_unique<Order>(
            startId + i,
            OrderType::BUY,
            100.5 + i,
            10 * (i + 1)
        );
        book.addOrder(move(order));
    }
}

int main() {

    /*
    ==========================
    SYSTEM START
    ==========================
    */
    OrderBook orderBook;

    // Multiple threads placing orders
    thread t1(placeOrders, ref(orderBook), 1);
    thread t2(placeOrders, ref(orderBook), 100);

    t1.join();
    t2.join();

    cout << "\nAll Orders in OrderBook:\n";
    orderBook.printOrders();

    /*
    ==========================
    RAII GUARANTEE
    ==========================
    - mutex auto unlocks
    - unique_ptr auto deletes orders
    - no memory leak
    ==========================
    */

    return 0;
}

