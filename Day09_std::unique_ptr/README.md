# Day 09 — std::unique_ptr (Modern C++)

## 📌 Topic
**`std::unique_ptr` and Exclusive Ownership (RAII)**

This day focuses on understanding how Modern C++ manages memory safely using
`std::unique_ptr`, following the **RAII (Resource Acquisition Is Initialization)** principle.

---

## 🎯 Goals
- Understand **exclusive ownership**
- Learn why `unique_ptr` **cannot be copied**
- Use **move semantics** correctly
- Prevent memory leaks by design
- Write safer, modern C++ code

---

## 🧠 Key Concepts Covered

### 1️⃣ RAII
- Resource acquired in constructor
- Resource released in destructor
- No manual `delete`

### 2️⃣ std::unique_ptr
- Owns a resource **exclusively**
- Automatically deletes the resource
- Default smart pointer in Modern C++

### 3️⃣ Ownership Rules
- ❌ Copy not allowed
- ✅ Move allowed using `std::move`

### 4️⃣ make_unique (Best Practice)
- Safer than using `new`
- Exception safe
- Cleaner syntax

### 5️⃣ Passing unique_ptr
- Ownership must be transferred explicitly
- Functions receive ownership via `std::move`

### 6️⃣ Custom Deleters
- Useful for non-memory resources
- Allows custom cleanup logic

### 7️⃣ unique_ptr with Arrays
- Supports dynamic arrays safely

---

## 🧪 Code Highlights
- RAII-based resource class
- Ownership transfer using move semantics
- Passing `unique_ptr` to functions
- Reset, release, and custom deleters
- Automatic cleanup at scope exit

---

## 💡 Interview Takeaways
- "`unique_ptr` represents exclusive ownership"
- "Copying is disabled to prevent double deletion"
- "Move semantics enable safe ownership transfer"
- "RAII eliminates manual memory management bugs"

---

## 🛠 Compile & Run
```bash
g++ day9_unique_ptr.cpp -std=c++17 -Wall -Wextra -o day9
./day9
