# Day 08 — RAII (Resource Acquisition Is Initialization)

## 📌 Topic
**RAII — Resource Acquisition Is Initialization**

RAII is a core Modern C++ concept where resource management is tied to object lifetime.
Resources are acquired in constructors and released automatically in destructors.

---

## 🎯 Goal
- Understand automatic resource management
- Avoid memory leaks and resource leaks
- Write exception-safe Modern C++ code
- Build the foundation for smart pointers

---

## 🧠 What Is RAII?

> **Object lifetime == Resource lifetime**

- Object created → resource acquired
- Object destroyed → resource released
- No manual cleanup required

---

## 🔹 Resources Covered

- File handling
- Dynamic memory
- Scope-based cleanup

---

## ❌ Problem Without RAII

- Manual `open / close`
- Manual `new / delete`
- Resource leaks if exceptions occur
- Hard-to-maintain code

---

## ✅ RAII Solution

- Resource is a class member
- Constructor acquires resource
- Destructor releases resource automatically

---

## 🧪 What This Code Demonstrates

- File handling using RAII
- Memory management using RAII
- Automatic cleanup at scope end
- Why RAII is exception-safe

---

## 📂 Folder Structure

