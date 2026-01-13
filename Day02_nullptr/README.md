# 📘 Day 03 – References & Const Correctness (Modern C++)

This example demonstrates how **references** and **const correctness** help write
**safe, efficient, and clean Modern C++ code**.

---

## 🔑 Key Learnings

- References act as an **alias** to an existing variable
- Passing by reference avoids **unnecessary copies**
- `const` prevents accidental data modification
- `const &` is the preferred way to pass read-only parameters
- `const` member functions guarantee **read-only behavior** of objects

---

## 🧠 Why This Matters

References and const correctness are fundamental for:
- Performance-critical code
- Safe API design
- STL and Modern C++ best practices

---

## ✅ Recommendation

> **Use `const &` whenever a function does not need to modify the data.**

---

## 📂 Files in This Folder

