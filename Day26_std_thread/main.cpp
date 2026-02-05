// ============================================================
// DAY 26 — std::thread (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS std::thread?
// --------------------
//
// std::thread represents a SINGLE thread of execution.
//
// A thread runs independently from main thread.
//
// ============================================================
//
// WHY MULTI-THREADING?
// --------------------
//
// - Parallel execution
// - Better CPU utilization
// - Improved performance
//
// ============================================================
//
// THREAD LIFECYCLE
// ----------------
//
// 1️⃣ Thread object created
// 2️⃣ New thread starts execution
// 3️⃣ Thread finishes work
// 4️⃣ Thread must be joined or detached
//
// ============================================================
//
// BASIC THREAD CREATION
// ---------------------
//
// std::thread t(function);
//
// Function runs in parallel with main.
//
// ============================================================
//
// JOIN vs DETACH
// --------------
//
// join()
// - Main thread waits
// - Blocks until thread finishes
//
// detach()
// - Thread runs independently
// - No synchronization
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Every std::thread MUST be:
// - joined OR
// - detached
//
// Otherwise → std::terminate()
//
// ============================================================
//
// PASSING ARGUMENTS TO THREAD
// ----------------------------
//
// Arguments are COPIED by default.
//
// Use std::ref() to pass by reference.
//
// ============================================================
//
// LAMBDAS WITH THREADS
// --------------------
//
// Lambdas are commonly used
// as thread entry functions.
//
// ============================================================
//
// THREAD OWNERSHIP
// ----------------
//
// std::thread is NON-COPYABLE
// but MOVEABLE.
//
// Ownership can be transferred.
//
// ============================================================
//
// THREAD ID
// ----------
//
// Each thread has unique ID
// std::this_thread::get_id()
//
// ============================================================
//
// HARDWARE CONCURRENCY
// --------------------
//
// std::thread::hardware_concurrency()
// returns number of cores
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Forgetting join()
// ❌ Accessing shared data unsafely
// ❌ Detaching when join is needed
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "std::thread represents a unit of execution"
// "Threads must be joined or detached"
// "std::thread is move-only"
//
// ============================================================
//
// PERFORMANCE NOTES
// -----------------
//
// Threads are heavyweight
// Use carefully
//
// ============================================================
//
// GOLDEN RULE #2
// --------------
//
// Prefer task-based concurrency
// (async, thread pool) over raw threads
//
// ============================================================
//
// END OF DAY 26 — std::thread
// ============================================================

