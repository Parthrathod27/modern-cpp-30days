#include <iostream>
#include <thread>
#include <atomic>
using namespace std;

/*
====================================================
DAY 29 — std::atomic (Modern C++)
====================================================

PROBLEM:
---------
Multiple threads ek hi variable ko access karte hain.
Normal int ke saath DATA RACE hoti hai.

Atomic ka goal:
---------------
✔ Lock-free thread safety
✔ No data race
✔ Fast (mutex se faster in simple cases)

Atomic ka rule:
---------------
"Read + Modify + Write" ek single atomic operation hota hai
====================================================
*/

// ❌ Normal variable (NOT thread-safe)
int normal_counter = 0;

// ✅ Atomic variable (thread-safe)
atomic<int> atomic_counter(0);

/*
WHY NORMAL COUNTER FAILS?
------------------------
normal_counter++
= read
= modify
= write
(ye 3 alag-alag steps hain)

Multiple threads ke beech ye unsafe hai
*/

// Thread function using normal int (unsafe)
void increment_normal() {
    for (int i = 0; i < 100000; i++) {
        normal_counter++; // ❌ data race
    }
}

// Thread function using atomic int (safe)
void increment_atomic() {
    for (int i = 0; i < 100000; i++) {
        atomic_counter++; // ✅ atomic operation
        // internally -> fetch_add(1)
    }
}

int main() {

    /*
    ==========================
    NORMAL COUNTER TEST
    ==========================
    */
    thread t1(increment_normal);
    thread t2(increment_normal);

    t1.join();
    t2.join();

    cout << "Normal Counter (Expected 200000): "
         << normal_counter << endl;

    /*
    Output unpredictable ho sakta hai
    kyuki DATA RACE hoti hai
    */

    /*
    ==========================
    ATOMIC COUNTER TEST
    ==========================
    */
    thread t3(increment_atomic);
    thread t4(increment_atomic);

    t3.join();
    t4.join();

    cout << "Atomic Counter (Always correct): "
         << atomic_counter << endl;

    /*
    ==========================
    MEMORY VISIBILITY
    ==========================

    Atomic sirf race nahi,
    memory visibility bhi fix karta hai.

    Default memory order:
    std::memory_order_seq_cst
    (sabse safe, sab threads same order dekhenge)
    */

    return 0;
}

