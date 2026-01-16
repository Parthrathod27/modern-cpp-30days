# Day 06 — constexpr (Modern C++)

## 📌 Topic
**constexpr — Compile-time computation**

This day focuses on understanding how Modern C++ allows certain computations to be performed at **compile time**, improving performance, safety, and code clarity.

---

## 🎯 Goal
- Learn the difference between **compile-time** and **run-time** evaluation
- Use `constexpr` variables and functions correctly
- Write optimization-friendly Modern C++ code

---

## 🧠 Key Concepts Covered

### 1️⃣ `constexpr` Variables
- Values known at compile time
- Stronger guarantee than `const`

```cpp
constexpr int x = 10;
