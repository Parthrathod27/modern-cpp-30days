// ============================================================
// DAY 27 — MUTEX & LOCKING (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS A MUTEX?
// ----------------
//
// mutex = MUTual EXclusion
//
// It protects SHARED DATA from being accessed
// by multiple threads at the same time.
//
// ============================================================
//
// WHY MUTEX IS NEEDED?
// --------------------
//
// Multiple threads accessing shared data
// can cause RACE CONDITIONS.
//
// Race condition = outcome depends on timing
//
// ============================================================
//
// CRITICAL SECTION
// ----------------
//
// Code that accesses shared data
// must be protected.
//
// Only ONE thread allowed at a time.
//
// ============================================================
//
// std::mutex
// -----------
//
// Provides:
// - lock()
// - unlock()
//
// Used to guard critical sections.
//
// ============================================================
//
// BASIC LOCKING FLOW
// ------------------
//
// mutex.lock();
// // critical section
// mutex.unlock();
//
// ❌ ERROR-PRONE if exception occurs
//
// ============================================================
//
// RAII SOLUTION — std::lock_guard
// --------------------------------
//
// lock_guard locks in constructor
// unlocks in destructor
//
// Exception-safe
//
// ============================================================
//
// std::unique_lock
// ------------------
//
// More flexible than lock_guard
//
// Features:
// - lock / unlock manually
// - deferred locking
// - try_lock
//
// Slight overhead compared to lock_guard
//
// ============================================================
//
// WHEN TO USE WHAT?
// -----------------
//
// lock_guard  → simple scope-based locking
// unique_lock → advanced control
//
// ============================================================
//
// DEADLOCK
// --------
//
// When two or more threads wait forever
// for each other to release locks.
//
// Common cause:
// - Locking mutexes in different order
//
// ============================================================
//
// DEADLOCK PREVENTION
// -------------------
//
// - Lock mutexes in same order
// - Use std::lock
// - Avoid nested locks
//
// ============================================================
//
// std::lock
// ----------
//
// Locks multiple mutexes atomically
// Prevents deadlock
//
// ============================================================
//
// try_lock
// ----------
//
// Attempts to lock
// Returns immediately if not possible
//
// Used for non-blocking logic
//
// ============================================================
//
// MUTEX TYPES
// -----------
//
// std::mutex
// - Basic mutex
//
// std::recursive_mutex
// - Same thread can lock multiple times
// - Use sparingly
//
// std::timed_mutex
// - Time-based locking
//
// ============================================================
//
// PERFORMANCE NOTES
// ------------------
//
// - Mutexes are expensive
// - Keep critical sections SHORT
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Forgetting to lock shared data
// ❌ Locking too much code
// ❌ Deadlocks due to bad ordering
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "mutex protects shared resources"
// "lock_guard provides RAII locking"
// "Deadlock occurs due to circular wait"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Lock minimum code for minimum time
//
// ============================================================
//
// END OF DAY 27 — MUTEX & LOCKING
// ============================================================

