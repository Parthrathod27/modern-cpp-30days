# Day 14 — noexcept & Move Optimization (Modern C++)

## 📌 Topic
**noexcept — Enabling Efficient Move Semantics**

This day explains how `noexcept` affects move semantics and
why it is critical for STL container performance.

---

## 🎯 Learning Objectives
- Understand what `noexcept` means
- Learn how STL uses `noexcept`
- Optimize move constructors
- Avoid hidden performance issues

---

## 🧠 Key Concepts
- Exception guarantees
- Move vs copy decision
- STL reallocation behavior
- Program termination on violation

---

## 🚀 Why noexcept Matters
- Enables fast container reallocation
- Prevents unnecessary deep copies
- Critical for performance-sensitive code

---

## 💬 Interview Takeaways
- "`noexcept` enables move optimization"
- "STL prefers noexcept move constructors"
- "Throwing from noexcept causes terminate"

---

## 📁 Folder Structure
