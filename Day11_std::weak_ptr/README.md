# Day 11 — std::weak_ptr (Modern C++)

## 📌 Topic
**std::weak_ptr — Breaking Circular Dependencies**

This day focuses on understanding why `std::weak_ptr` exists and how it solves
the circular reference problem caused by `std::shared_ptr`.

---

## 🎯 Learning Objectives
- Understand circular dependency
- Learn difference between ownership and observation
- Know how `weak_ptr` works internally
- Safely access shared resources using `lock()`

---

## 🧠 Key Concepts
- `weak_ptr` does NOT own the resource
- Does NOT increase `use_count`
- Used with `shared_ptr`
- Prevents memory leaks

---

## 🚨 Problem Solved
**Circular Reference**
- Two objects owning each other
- `use_count` never becomes zero
- Memory leak

✅ Solution: Replace one `shared_ptr` with `weak_ptr`

---

## 💬 Interview Takeaways
- "`weak_ptr` breaks circular dependencies"
- "It observes without owning"
- "Resource lifetime is controlled by `shared_ptr` only"

---

## 📁 Folder Structure
