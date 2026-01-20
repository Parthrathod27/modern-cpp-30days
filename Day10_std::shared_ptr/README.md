# Day 10 — std::shared_ptr (Modern C++)

## 📌 Topic
**std::shared_ptr — Shared Ownership & Reference Counting**

This day focuses on understanding the *theory behind* `std::shared_ptr` in Modern C++,
explained entirely in **coded / commented form** for clarity and revision.

---

## 🎯 Learning Objectives
- Understand **shared ownership**
- Learn how **reference counting** works
- Know when and when NOT to use `shared_ptr`
- Identify **performance costs**
- Understand **circular dependency problem**

---

## 🧠 Core Concepts (Theory)

### 1️⃣ What is `shared_ptr`?
- A smart pointer that allows **multiple owners** of the same resource
- Resource stays alive as long as **at least one owner exists**
- Automatically deletes resource when **use_count becomes zero**

---

### 2️⃣ Reference Counting
- Internally maintains a **control block**
- Tracks:
  - `use_count` (strong references)
  - `weak_count`
- Copy → `use_count++`
- Destruction / reset → `use_count--`
- When `use_count == 0` → resource destroyed

---

### 3️⃣ Ownership Rules
- ✅ Copy allowed
- ✅ Move allowed
- ❌ Manual delete not required
- ❌ Not suitable for single ownership

---

### 4️⃣ Creation Best Practice
- Prefer `make_shared<T>()`
- Reasons:
  - Single memory allocation
  - Faster
  - Exception safe

---

### 5️⃣ Passing to Functions
- Pass by value → increases reference count
- Pass by reference → no ownership change
- Avoid passing raw pointers

---

### 6️⃣ Performance Cost
- Slower than `unique_ptr`
- Uses atomic operations
- Extra memory for control block

➡️ **Rule:**  
> Use `unique_ptr` by default, `shared_ptr` only when sharing is required

---

### 7️⃣ Biggest Pitfall — Circular Dependency
- Two objects owning each other via `shared_ptr`
- Reference count never becomes zero
- Results in **memory leak**

✅ **Solution:** `std::weak_ptr` (Day 11)

---

## 💬 Interview One-Liners
- “`shared_ptr` uses reference counting for lifetime management”
- “Resource is destroyed when the last owner goes out of scope”
- “Avoid `shared_ptr` unless shared lifetime is necessary”

---

## 📁 Folder Structure
