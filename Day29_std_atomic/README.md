# Day 29 — std::atomic (Modern C++)

## 📌 Topic
Lock-free thread-safe programming using `std::atomic`.

---

## ❓ Why std::atomic?

When multiple threads access the same variable:
- Normal variables cause **data races**
- Mutex is safe but **slow**
- `std::atomic` gives **fast + safe** access for single variables

---

## 🔹 Key Concepts Covered

- Data Race problem
- Atomic vs normal variables
- Atomic increment (`++`, `fetch_add`)
- Thread safety without mutex
- Memory visibility guarantees
- Atomic vs Mutex comparison

---

## 🧠 Interview Notes

- Atomic operations are **lock-free (mostly)**
- Atomic works best for:
  - Counters
  - Flags
  - Statistics
- Atomic cannot replace mutex for complex logic

---

## 🚀 Output Expectation

- Normal counter → incorrect / unpredictable
- Atomic counter → always correct

---

## 🛠 Compile & Run

```bash
g++ atomic_explained.cpp -std=c++17 -pthread
./a.out
