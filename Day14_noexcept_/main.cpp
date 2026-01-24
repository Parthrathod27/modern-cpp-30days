// ============================================================
// DAY 14 — noexcept & MOVE OPTIMIZATION (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS noexcept?
// -----------------
//
// noexcept is a C++ keyword that tells the compiler:
//
//   "This function will NOT throw exceptions."
//
// It is a CONTRACT between programmer and compiler.
//
// ============================================================
//
// WHY noexcept EXISTS?
// --------------------
//
// Standard Library (STL) needs to know:
//
// - Is it SAFE to move objects?
// - Or should it COPY instead?
//
// noexcept enables:
// - Faster code
// - Move optimizations
// - Strong exception guarantees
//
// ============================================================
//
// CORE IDEA
// ---------
//
// If move constructor is marked noexcept:
//
//   STL containers will MOVE elements
//
// Else:
//
//   STL containers will COPY elements
//
// ============================================================
//
// STL REALITY
// -----------
//
// Containers like:
// - std::vector
// - std::deque
// - std::map
//
// During reallocation:
//
// If move is noexcept → move elements
// If move may throw → copy elements
//
// ============================================================
//
// noexcept SYNTAX
// ---------------
//
// 1. Declare function noexcept
//    void f() noexcept;
//
// 2. noexcept with condition
//    void f() noexcept(condition);
//
// ============================================================
//
// MOVE CONSTRUCTOR + noexcept
// ---------------------------
//
// Best Practice:
//
//   Class(Class&&) noexcept;
//
// Why?
// - Enables fast reallocation
// - Prevents unnecessary copies
//
// ============================================================
//
// WHAT HAPPENS IF noexcept LIES?
// ------------------------------
//
// If a noexcept function throws:
//
// → std::terminate() is called
// → Program immediately terminates
//
// No stack unwinding
// No catch possible
//
// ============================================================
//
// noexcept vs try/catch
// ---------------------
//
// noexcept is:
// - Compile-time promise
// - Used for optimization
//
// try/catch is:
// - Runtime handling
// - Used for error recovery
//
// ============================================================
//
// noexcept OPERATOR
// -----------------
//
// Syntax:
//   noexcept(expression)
//
// Returns:
//   true  → expression cannot throw
//   false → expression may throw
//
// Used by STL internally.
//
// ============================================================
//
// noexcept & RULE OF 5
// --------------------
//
// If you implement move constructor:
//
// ALWAYS mark it noexcept
//
// Otherwise:
// - STL falls back to copying
// - Performance degrades
//
// ============================================================
//
// PERFORMANCE IMPACT
// ------------------
//
// Without noexcept:
// - Copy during vector growth
// - O(n) deep copy
//
// With noexcept:
// - Move during growth
// - O(1) pointer swap
//
// ============================================================
//
// WHEN TO USE noexcept?
// ---------------------
//
// ✔ Move constructors
// ✔ Move assignment
// ✔ Destructors (by default noexcept)
//
// ❌ Functions that may throw
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "noexcept enables move optimization in STL"
// "STL prefers noexcept move over copy"
// "If noexcept function throws → terminate"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Always mark move constructors noexcept
//
// ============================================================
//
// END OF DAY 14 — noexcept THEORY
// ============================================================

