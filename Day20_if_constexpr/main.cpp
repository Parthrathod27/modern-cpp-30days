// ============================================================
// DAY 20 — if constexpr (C++17)
// ============================================================
//
// WHAT IS if constexpr?
// ----------------------
//
// if constexpr is a COMPILE-TIME conditional.
//
// The decision is made during compilation,
// NOT at runtime.
//
// Unused branches are completely REMOVED.
//
// ============================================================
//
// WHY if constexpr EXISTS?
// ------------------------
//
// Traditional if:
//
// if (condition) {
//     // code
// }
//
// Both branches must be VALID code
// even if condition is false.
//
// ❌ Causes template errors
//
// ============================================================
//
// PROBLEM WITHOUT if constexpr
// -----------------------------
//
// Templates often contain code that is
// ONLY valid for certain types.
//
// Normal if does NOT remove invalid code.
//
// ============================================================
//
// if constexpr SOLUTION
// ---------------------
//
// if constexpr (condition) {
//     // compiled only if true
// } else {
//     // discarded if false
// }
//
// Invalid code in discarded branch
// does NOT cause compilation error.
//
// ============================================================
//
// BASIC SYNTAX
// ------------
//
// if constexpr (compile_time_condition) {
//     ...
// }
//
// Condition MUST be evaluable at compile time
//
// ============================================================
//
// COMMON CONDITIONS
// -----------------
//
// - std::is_integral<T>
// - std::is_floating_point<T>
// - std::is_same<T, U>
// - sizeof(T)
// - constexpr expressions
//
// ============================================================
//
// if constexpr vs if
// -------------------
//
// if             → runtime
// if constexpr   → compile-time
//
// if             → both branches compiled
// if constexpr   → only one branch exists
//
// ============================================================
//
// TEMPLATE USE CASE
// -----------------
//
// template<typename T>
// void process(T value) {
//     if constexpr (std::is_integral_v<T>) {
//         // integer logic
//     } else {
//         // floating logic
//     }
// }
//
// No SFINAE needed
//
// ============================================================
//
// REMOVES SFINAE COMPLEXITY
// -------------------------
//
// Before C++17:
// - enable_if
// - specialization
//
// After C++17:
// - simple readable if constexpr
//
// ============================================================
//
// if constexpr WITH return
// -------------------------
//
// Different return types possible
// because only one branch is compiled
//
// ============================================================
//
// if constexpr WITH static_assert
// --------------------------------
//
// static_assert can be placed in else
// to block unsupported types
//
// ============================================================
//
// COMPILE-TIME BRANCHING FLOW
// ---------------------------
//
// Template type known
// → condition evaluated
// → one branch selected
// → other branch erased
//
// ============================================================
//
// PERFORMANCE BENEFITS
// --------------------
//
// - Zero runtime overhead
// - Smaller binary
// - Faster execution
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Using runtime condition
// ❌ Expecting both branches to exist
// ❌ Forgetting constexpr keyword
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "if constexpr removes unused branches"
// "Compile-time decision, zero overhead"
// "Replaces many SFINAE use cases"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Use if constexpr when behavior depends on TYPE
//
// ============================================================
//
// END OF DAY 20 — if constexpr
// ============================================================

