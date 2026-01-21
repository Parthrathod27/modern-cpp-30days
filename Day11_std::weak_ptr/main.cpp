// ============================================================
// DAY 11 — std::weak_ptr (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS weak_ptr?
// -----------------
// weak_ptr is a smart pointer that OBSERVES a shared_ptr
// BUT does NOT own the resource.
//
// It does NOT increase reference count (use_count).
//
// ============================================================
//
// WHY weak_ptr EXISTS?
// --------------------
//
// shared_ptr problem:
//
// Object A owns Object B (shared_ptr)
// Object B owns Object A (shared_ptr)
//
// Result:
// - use_count never becomes 0
// - Destructor never called
// - MEMORY LEAK
//
// This situation is called:
// 👉 CIRCULAR DEPENDENCY
//
// weak_ptr solves this problem.
//
// ============================================================
//
// CORE IDEA
// ---------
//
// weak_ptr:
// - Refers to a resource managed by shared_ptr
// - Does NOT control lifetime
// - Does NOT prevent destruction
//
// shared_ptr  -> OWNER
// weak_ptr    -> OBSERVER
//
// ============================================================
//
// OWNERSHIP RULES
// ---------------
//
// 1. weak_ptr does NOT increase use_count
// 2. weak_ptr cannot access resource directly
// 3. weak_ptr must be converted to shared_ptr using lock()
//
// ============================================================
//
// CONTROL BLOCK DETAILS
// ---------------------
//
// shared_ptr control block contains:
//
// - use_count   (strong references)
// - weak_count  (weak references)
//
// weak_ptr:
// - increases weak_count
// - does NOT affect use_count
//
// Resource destroyed when:
//   use_count == 0
//
// Control block destroyed when:
//   use_count == 0 AND weak_count == 0
//
// ============================================================
//
// ACCESSING RESOURCE SAFELY
// -------------------------
//
// weak_ptr cannot use:
//   ptr->member   ❌
//
// Correct way:
//   shared_ptr<T> sp = wp.lock();
//
// lock():
// - returns shared_ptr if resource exists
// - returns nullptr if resource destroyed
//
// ============================================================
//
// EXPIRED CHECK
// -------------
//
// wp.expired():
// - true  → resource already destroyed
// - false → resource still alive
//
// ============================================================
//
// RESET BEHAVIOR
// --------------
//
// wp.reset():
// - stops observing resource
// - decreases weak_count
// - no effect on resource lifetime
//
// ============================================================
//
// WHEN TO USE weak_ptr?
// ---------------------
//
// ✔ To break circular dependency
// ✔ Observer pattern
// ✔ Parent-child relationship
// ✔ Cache systems
//
// ============================================================
//
// WHEN NOT TO USE weak_ptr?
// -------------------------
//
// ❌ When ownership is required
// ❌ When lifetime must be guaranteed
//
// ============================================================
//
// shared_ptr vs weak_ptr
// ----------------------
//
// shared_ptr:
// - Owns resource
// - Controls lifetime
// - use_count++
//
// weak_ptr:
// - Does NOT own resource
// - Does NOT control lifetime
// - Observes safely
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "weak_ptr breaks circular dependencies"
// "weak_ptr does not affect reference count"
// "lock() is required to access resource"
// "Resource lifetime is controlled only by shared_ptr"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// If two objects point to each other:
// - One MUST be shared_ptr
// - Other MUST be weak_ptr
//
// ============================================================
//
// END OF DAY 11 — weak_ptr THEORY
// ============================================================

