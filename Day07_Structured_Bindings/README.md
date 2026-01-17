# Day 07 — Structured Bindings (C++17)

## 📌 Topic
**Structured Bindings (C++17)**

Structured bindings allow unpacking multiple values from an object into separate variables in a clean and readable way.

---

## 🎯 Goal
- Write cleaner and more readable Modern C++ code
- Reduce boilerplate when working with STL
- Use C++17 features confidently in interviews and projects

---

## 🧠 What Are Structured Bindings?

Structured bindings let you extract values from:
- `pair`
- `tuple`
- `map`
- `struct` (public members)

Instead of accessing members manually, you can unpack them directly.

---

## 🔹 Key Concepts Covered

### 1️⃣ `pair`
```cpp
pair<int, int> p = {10, 20};
auto [x, y] = p;
