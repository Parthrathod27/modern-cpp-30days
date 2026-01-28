# Day 18 — Perfect Forwarding (Modern C++)

## 📌 Topic
**Perfect Forwarding & Universal References**

This day focuses on understanding how Modern C++
preserves value categories while forwarding parameters.

---

## 🎯 Learning Objectives
- Understand perfect forwarding
- Learn universal (forwarding) references
- Master std::forward
- Avoid unnecessary copies and moves

---

## 🧠 Key Concepts
- Universal references (T&&)
- Reference collapsing rules
- std::forward vs std::move
- Value category preservation

---

## 🚀 Why Perfect Forwarding Matters
- Enables zero-overhead abstractions
- Used internally in STL
- Critical for high-performance C++

---

## 💬 Interview Takeaways
- "Perfect forwarding preserves lvalue/rvalue nature"
- "T&& is universal reference only in templates"
- "std::forward depends on template type T"

---

## 📁 Folder Structure
