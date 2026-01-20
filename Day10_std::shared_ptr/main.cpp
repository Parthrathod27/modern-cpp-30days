// ============================================================
// DAY 10 — std::shared_ptr (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS shared_ptr?
// -------------------
// shared_ptr is a smart pointer that represents SHARED OWNERSHIP
// of a dynamically allocated resource.
//
// Multiple shared_ptr objects can point to the SAME resource.
//
// The resource is destroyed ONLY when the LAST shared_ptr releases it.
//
// ============================================================
//
// WHY shared_ptr EXISTS?
// ----------------------
//
// Problem with raw pointers:
//
// 1. Multiple users access same resource
// 2. No clear owner
// 3. Double delete OR memory leak
//
// shared_ptr SOLVES this by:
//
// - Tracking how many owners exist
// - Deleting resource automatically when count == 0
//
// ============================================================
//
// CORE MECHANISM — REFERENCE COUNTING
// ----------------------------------
//
// Internally shared_ptr maintains:
//
//   • Pointer to resource
//   • Control Block
//       - use_count (strong references)
//       - weak_count
//       - deleter
//
// Every time a shared_ptr is copied:
//   use_count++
//
// Every time a shared_ptr is destroyed/reset:
//   use_count--
//
// When use_count == 0:
//   → resource is destroyed
//
// ============================================================
//
// OWNERSHIP RULES
// ---------------
//
// 1. Copy is ALLOWED
//    shared_ptr<T> a = b;   // both own resource
//
// 2. Move is ALLOWED
//    shared_ptr<T> a = move(b);  // ownership transferred
//
// 3. Resource lives as long as ANY owner exists
//
// ============================================================
//
// CREATION RULES
// --------------
//
// Preferred:
//   make_shared<T>()
//
// Why?
// - Single allocation (control block + object)
// - Faster
// - Exception safe
//
// Avoid:
//   shared_ptr<T>(new T)
//
// ============================================================
//
// PASSING shared_ptr TO FUNCTIONS
// -------------------------------
//
// Case 1: Pass by VALUE
//   void f(shared_ptr<T> p)
//   → ownership count increases
//
// Case 2: Pass by REFERENCE
//   void f(const shared_ptr<T>& p)
//   → no ownership change
//
// Case 3: Pass by RAW pointer (BAD)
//   void f(T* p)
//
// ============================================================
//
// RESET BEHAVIOR
// --------------
//
// reset():
// - Releases ownership
// - Decrements use_count
//
// If use_count becomes 0:
// - Destructor of resource is called
//
// ============================================================
//
// CUSTOM DELETER
// --------------
//
// shared_ptr can store a custom deleter
// Useful for:
// - Files
// - Sockets
// - Mutex
// - Memory pools
//
// ============================================================
//
// PERFORMANCE COST
// ----------------
//
// shared_ptr is SLOWER than unique_ptr because:
//
// - Atomic reference count
// - Extra memory for control block
//
// Rule of thumb:
// - Use unique_ptr by default
// - Use shared_ptr ONLY when sharing is REQUIRED
//
// ============================================================
//
// BIGGEST DANGER — CIRCULAR REFERENCE
// ----------------------------------
//
// Object A owns B via shared_ptr
// Object B owns A via shared_ptr
//
// use_count never becomes 0
// Memory leak occurs
//
// Solution:
//   Use weak_ptr (Day 11)
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "shared_ptr represents shared ownership"
// "Lifetime is controlled by reference count"
// "Destroyed when last owner goes out of scope"
// "Avoid unless sharing is necessary"
//
// ============================================================
//
// WHEN TO USE shared_ptr?
// -----------------------
//
// ✔ Shared lifetime
// ✔ Multiple owners
// ✔ Observer patterns
// ✔ Graph-like structures
//
// ❌ Single ownership
// ❌ Performance critical code
//
// ============================================================
//
// END OF THEORY (CODED FORMAT)
// ============================================================

