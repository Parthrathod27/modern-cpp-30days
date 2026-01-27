// ============================================================
// DAY 17 — TEMPLATE SPECIALIZATION (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS TEMPLATE SPECIALIZATION?
// --------------------------------
//
// Template Specialization allows defining
// SPECIAL behavior for SPECIFIC template arguments.
//
// It overrides the generic template behavior.
//
// ============================================================
//
// WHY TEMPLATE SPECIALIZATION EXISTS?
// -----------------------------------
//
// Generic templates work for most types,
// but sometimes a specific type needs:
//
// - Optimized logic
// - Different behavior
// - Custom handling
//
// Specialization enables this.
//
// ============================================================
//
// CORE IDEA
// ---------
//
// Generic Template → Default behavior
// Specialized Template → Custom behavior for specific types
//
// Compiler chooses the MOST SPECIALIZED version.
//
// ============================================================
//
// TYPES OF SPECIALIZATION
// -----------------------
//
// 1. FULL SPECIALIZATION
// 2. PARTIAL SPECIALIZATION (Class templates only)
//
// ============================================================
//
// FULL SPECIALIZATION
// -------------------
//
// Applies when ALL template parameters are fixed.
//
// Generic template is completely overridden
// for a specific type.
//
// ============================================================
//
// PARTIAL SPECIALIZATION
// ----------------------
//
// Applies when SOME template parameters are fixed.
//
// ONLY AVAILABLE for CLASS TEMPLATES
//
// Function templates DO NOT support partial specialization.
//
// ============================================================
//
// WHY FUNCTION TEMPLATES DO NOT SUPPORT PARTIAL SPECIALIZATION?
// -------------------------------------------------------------
//
// Because function overloading already provides
// similar behavior.
//
// ============================================================
//
// SPECIALIZATION SELECTION RULE
// -----------------------------
//
// Compiler chooses:
// - Most specialized match
// - If ambiguous → compilation error
//
// ============================================================
//
// ORDER OF PREFERENCE
// -------------------
//
// 1. Exact match specialization
// 2. Partial specialization
// 3. Primary (generic) template
//
// ============================================================
//
// TEMPLATE SPECIALIZATION vs OVERLOADING
// -------------------------------------
//
// Overloading:
// - Based on function signatures
//
// Specialization:
// - Based on template arguments
//
// ============================================================
//
// WHERE SPECIALIZATION IS USED?
// -----------------------------
//
// - STL implementations
// - Type traits
// - Optimized algorithms
// - Low-level libraries
//
// ============================================================
//
// DANGERS
// -------
//
// - Over-specialization increases complexity
// - Harder to maintain
// - Can cause ambiguity
//
// ============================================================
//
// BEST PRACTICES
// --------------
//
// - Keep generic logic in primary template
// - Specialize only when necessary
// - Prefer if constexpr (C++17) when possible
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Template specialization customizes behavior for specific types"
// "Partial specialization works only for class templates"
// "Compiler picks the most specialized template"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Specialize templates only when generic logic is insufficient
//
// ============================================================
//
// END OF DAY 17 — TEMPLATE SPECIALIZATION THEORY
// ============================================================

