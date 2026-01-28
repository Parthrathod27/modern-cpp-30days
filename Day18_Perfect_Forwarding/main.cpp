// ============================================================
// DAY 18 — PERFECT FORWARDING (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS PERFECT FORWARDING?
// ---------------------------
//
// Perfect Forwarding means:
// Passing arguments to another function
// WITHOUT changing their original nature.
//
// i.e.,
// - lvalue remains lvalue
// - rvalue remains rvalue
//
// ============================================================
//
// PROBLEM BEFORE PERFECT FORWARDING
// ---------------------------------
//
// When we pass parameters normally:
//
// - rvalues may become lvalues
// - move semantics break
// - unnecessary copies happen
//
// ============================================================
//
// CORE BUILDING BLOCKS
// --------------------
//
// Perfect Forwarding is achieved using:
//
// 1. Universal (Forwarding) References
// 2. std::forward<T>()
//
// ============================================================
//
// UNIVERSAL (FORWARDING) REFERENCES
// ---------------------------------
//
// Syntax:
// template<typename T>
// void func(T&& param);
//
// IMPORTANT:
// - T&& is NOT always rvalue reference
//
// It becomes:
// - lvalue reference if argument is lvalue
// - rvalue reference if argument is rvalue
//
// ============================================================
//
// WHY CALLED "UNIVERSAL"?
// -----------------------
//
// Because it can bind to:
//
// - lvalues
// - rvalues
// - const objects
// - temporaries
//
// ============================================================
//
// REFERENCE COLLAPSING RULES
// --------------------------
//
// T&  &  → T&
// T&  && → T&
// T&& &  → T&
// T&& && → T&&
//
// This is why T&& adapts correctly.
//
// ============================================================
//
// std::forward<T>()
// ------------------
//
// std::forward preserves the value category.
//
// It conditionally casts param to:
// - lvalue reference OR
// - rvalue reference
//
// Based on template type T.
//
// ============================================================
//
// WHY NOT std::move?
// -------------------
//
// std::move ALWAYS converts to rvalue
// ❌ breaks lvalues
//
// std::forward conditionally forwards
// ✅ preserves correctness
//
// ============================================================
//
// PERFECT FORWARDING FLOW
// -----------------------
//
// Caller argument → Template parameter T
// → Reference collapsing
// → std::forward<T>()
// → Exact forwarding
//
// ============================================================
//
// WHERE PERFECT FORWARDING IS USED?
// ---------------------------------
//
// - Factory functions
// - Wrapper functions
// - Emplace functions (emplace_back)
// - std::make_unique / make_shared
//
// ============================================================
//
// PERFECT FORWARDING vs MOVE
// --------------------------
//
// std::move      → unconditional cast to rvalue
// std::forward   → conditional cast based on T
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Using std::move instead of std::forward
// ❌ Forgetting template<typename T>
// ❌ Using forward without template deduction
//
// ============================================================
//
// WHEN NOT TO USE PERFECT FORWARDING?
// ----------------------------------
//
// - Simple functions
// - When ownership transfer is explicit
// - Overuse reduces readability
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Perfect forwarding preserves value category"
// "T&& with templates is a universal reference"
// "std::forward forwards conditionally"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Use std::forward ONLY with template type T
//
// ============================================================
//
// END OF DAY 18 — PERFECT FORWARDING THEORY
// ============================================================

