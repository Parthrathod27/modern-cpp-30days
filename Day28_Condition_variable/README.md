# Day 28 — std::condition_variable (Modern C++)

## 📌 Topic
Thread synchronization using `std::condition_variable`

---

## 🧠 What is condition_variable?
`std::condition_variable` is used to block a thread until a specific condition is met.
It allows efficient thread communication without busy waiting.

---

## 🚫 Problem Without condition_variable
- Threads keep checking a condition in a loop
- Wastes CPU (busy waiting)

---

## ✅ Why condition_variable?
- Makes threads sleep efficiently
- Wakes threads only when required
- Works together with mutex

---

## 🧩 Core Components
- `std::mutex`
- `std::condition_variable`
- Shared condition flag (bool / state)

---

## 🔄 How It Works
### Waiting Thread
- Acquires mutex
- Calls `cv.wait()`
- Thread sleeps until notified

### Notifying Thread
- Acquires mutex
- Updates shared condition
- Calls `notify_one()` or `notify_all()`

---

## ⚠️ Spurious Wakeups
Threads may wake up without notification.
Always use `wait()` with a predicate.

```cpp
cv.wait(lock, [] { return condition == true; });
