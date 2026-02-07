// ============================================================
// DAY 28 — std::condition_variable (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS A CONDITION VARIABLE?
// ------------------------------
//
// condition_variable is used to
// BLOCK a thread UNTIL some condition is met.
//
// It avoids busy waiting (CPU waste).
//
// ============================================================
//
// WHY CONDITION VARIABLE?
// ------------------------
//
// Mutex only provides mutual exclusion.
// But sometimes threads must WAIT
// until something happens.
//
// Example:
// - Producer produces data
// - Consumer waits for data
//
// ============================================================
//
// BUSY WAITING (BAD PRACTICE)
// ---------------------------
//
// while(data_not_ready) {
//     // keep checking ❌ CPU waste
// }
//
// ============================================================
//
// CONDITION VARIABLE (GOOD PRACTICE)
// ---------------------------------
//
// Thread sleeps efficiently
// until notified.
//
// ============================================================
//
// REQUIRED COMPONENTS
// --------------------
//
// 1. std::mutex
// 2. std::condition_variable
// 3. Shared condition flag
//
// ============================================================
//
// BASIC FLOW
// -----------
//
// WAITING THREAD:
// 1. Lock mutex
// 2. Call cv.wait()
// 3. Thread sleeps
//
// NOTIFYING THREAD:
// 1. Lock mutex
// 2. Update condition
// 3. Call notify_one / notify_all
//
// ============================================================
//
// WHY MUTEX IS REQUIRED?
// -----------------------
//
// - Protect shared condition
// - Avoid race conditions
// - Required by cv.wait()
//
// ============================================================
//
// cv.wait(lock)
// --------------
//
// Internally:
// 1. Unlocks mutex
// 2. Puts thread to sleep
// 3. On notification → re-locks mutex
//
// ============================================================
//
// SPURIOUS WAKEUP
// ----------------
//
// Threads may wake up WITHOUT notification.
//
// Hence ALWAYS use wait with predicate.
//
// ============================================================
//
// SAFE WAIT PATTERN
// ------------------
//
// cv.wait(lock, [] {
//     return condition == true;
// });
//
// Predicate re-checks condition
//
// ============================================================
//
// notify_one()
// -------------
//
// Wakes ONE waiting thread
//
// ============================================================
//
// notify_all()
// -------------
//
// Wakes ALL waiting threads
//
// ============================================================
//
// PRODUCER–CONSUMER MODEL
// -----------------------
//
// Producer:
// - Produces data
// - Sets condition = true
// - notify_one()
//
// Consumer:
// - wait until condition is true
// - Consumes data
//
// ============================================================
//
// DEADLOCK AVOIDANCE
// -------------------
//
// - Always modify condition BEFORE notify
// - Hold mutex while updating shared data
//
// ============================================================
//
// condition_variable vs mutex
// ----------------------------
//
// mutex → protects data
// condition_variable → signals events
//
// Both work together
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Calling notify without mutex
// ❌ Not using predicate
// ❌ Forgetting shared condition flag
//
// ============================================================
//
// PERFORMANCE NOTES
// ------------------
//
// - Very efficient waiting
// - No CPU spinning
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "condition_variable allows threads to wait"
// "Used to avoid busy waiting"
// "Always use predicate to handle spurious wakeups"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Condition variable NEVER replaces mutex
// It COMPLEMENTS mutex
//
// ============================================================
//
// END OF DAY 28 — CONDITION VARIABLE
// ============================================================

