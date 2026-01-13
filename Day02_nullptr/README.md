# 📘 Day 02 – nullptr vs NULL (Modern C++)

This example demonstrates **why `nullptr` is safer than `NULL` in Modern C++** and why it should always be preferred in modern codebases.

---

## 🔑 Key Learnings

- `NULL` is typically an **integer literal (`0`)**, not a true pointer
- Using `NULL` can cause **function overloading ambiguity**
- `nullptr` is a **type-safe null pointer literal** introduced in **C++11**
- `nullptr` works correctly with:
  - Raw pointers
  - Smart pointers
- `nullptr` avoids subtle bugs and improves code clarity

---

## 🧠 Why `nullptr` Matters

In Modern C++, type safety is critical.  
Using `nullptr` ensures the compiler clearly understands pointer intent, especially in:
- Function overloading
- Template code
- Large-scale systems

---

## ✅ Recommendation

> **Always prefer `nullptr` over `NULL` in Modern C++ code.**

---

## 📂 Files in This Folder



## 📂 Files in This Folder

