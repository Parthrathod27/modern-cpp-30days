// ============================================================
// DAY 23 — LAMBDAS (ADVANCED THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS A LAMBDA?
// ------------------
//
// A lambda is an ANONYMOUS FUNCTION.
// It has no name and is usually used inline.
//
// Syntax (basic):
// [capture](parameters) -> return_type { body }
//
// ============================================================
//
// WHY LAMBDAS EXIST?
// ------------------
//
// - Avoid writing small helper functions
// - Keep logic close to usage
// - Enable functional-style programming
// - Used heavily with std::algorithm
//
// ============================================================
//
// LAMBDA STRUCTURE
// ----------------
//
// [ CAPTURE ] ( PARAMETERS ) -> RETURN { BODY }
//
// Example layout:
// [x](int y) -> int { return x + y; }
//
// ============================================================
//
// CAPTURE CLAUSE (MOST IMPORTANT PART)
// ------------------------------------
//
// Capture decides WHICH outside variables
// lambda can access.
//
// ============================================================
//
// TYPES OF CAPTURE
// ----------------
//
// 1️⃣ []        → capture nothing
// 2️⃣ [x]       → capture x by value
// 3️⃣ [&x]      → capture x by reference
// 4️⃣ [=]       → capture all by value
// 5️⃣ [&]       → capture all by reference
// 6️⃣ [=, &x]   → mix (all by value, x by ref)
//
// ============================================================
//
// VALUE vs REFERENCE CAPTURE
// --------------------------
//
// [x]  → lambda gets its own COPY
// [&x] → lambda refers to original x
//
// ============================================================
//
// MUTABLE LAMBDA
// ---------------
//
// By default, value-captured variables
// are read-only inside lambda.
//
// mutable allows modification of copies.
//
// Syntax:
// [x]() mutable { x++; }
//
// ============================================================
//
// GENERIC LAMBDAS (C++14)
// -----------------------
//
// Lambdas can use auto parameters.
//
// Example:
// [](auto a, auto b) { return a + b; }
//
// Works for multiple types.
//
// ============================================================
//
// RETURN TYPE DEDUCTION
// ---------------------
//
// Return type is usually deduced automatically.
//
// Explicit return needed when:
// - multiple return paths with different types
//
// ============================================================
//
// LAMBDA AS FUNCTION OBJECT
// --------------------------
//
// Internally, lambda becomes a functor object
// with operator() overloaded.
//
// Each lambda has UNIQUE TYPE.
//
// ============================================================
//
// LAMBDAS WITH std::algorithm
// ----------------------------
//
// Used as predicates, comparators, transformers.
//
// Examples:
// - sort
// - find_if
// - count_if
//
// ============================================================
//
// CAPTURE BY VALUE GOTCHA
// ------------------------
//
// Value capture happens at lambda CREATION,
// not at execution time.
//
// ============================================================
//
// LAMBDA LIFETIME RULE
// --------------------
//
// Never return lambda capturing references
// to local variables.
//
// Dangling reference risk.
//
// ============================================================
//
// LAMBDAS vs FUNCTION POINTERS
// -----------------------------
//
// Lambda:
// - Can capture state
// - Inline & optimized
//
// Function pointer:
// - No state
// - Less flexible
//
// ============================================================
//
// PERFORMANCE NOTES
// ------------------
//
// - Lambdas are zero-cost abstractions
// - Often inlined by compiler
// - Faster than std::function in many cases
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Capturing everything by reference
// ❌ Forgetting mutable keyword
// ❌ Returning lambdas with dangling refs
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Lambda is an anonymous function object"
// "Each lambda has unique type"
// "mutable allows modifying captured values"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Capture minimally and explicitly
//
// ============================================================
//
// END OF DAY 23 — ADVANCED LAMBDAS
// ============================================================

