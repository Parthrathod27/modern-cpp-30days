// ============================================================
// DAY 15 — FUNCTION TEMPLATES (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS A FUNCTION TEMPLATE?
// ----------------------------
//
// A function template allows writing ONE function
// that works for MULTIPLE DATA TYPES.
//
// It enables GENERIC PROGRAMMING in C++.
//
// ============================================================
//
// WHY FUNCTION TEMPLATES EXIST?
// -----------------------------
//
// Without templates:
//
// - Same logic repeated for int, float, double, etc.
// - Code duplication
// - Hard to maintain
//
// Function templates solve this by:
//
// - Writing logic ONCE
// - Letting compiler generate type-specific functions
//
// ============================================================
//
// CORE IDEA
// ---------
//
// Template = Blueprint
// Function is GENERATED at compile-time
//
// Compiler creates separate versions per type used.
//
// ============================================================
//
// TEMPLATE SYNTAX
// ---------------
//
// template <typename T>
// T functionName(T a, T b);
//
// 'T' is a PLACEHOLDER TYPE
//
// ============================================================
//
// TYPE DEDUCTION
// --------------
//
// Compiler deduces template type from arguments
//
// If deduction fails:
// - Compilation error
//
// ============================================================
//
// EXPLICIT TEMPLATE ARGUMENT
// --------------------------
//
// Programmer can explicitly specify type:
//
// functionName<int>(a, b);
//
// Useful when deduction is ambiguous.
//
// ============================================================
//
// MULTIPLE TEMPLATE PARAMETERS
// ----------------------------
//
// template <typename T, typename U>
//
// Allows functions with different parameter types.
//
// ============================================================
//
// TEMPLATE INSTANTIATION
// ----------------------
//
// Occurs at COMPILE TIME
//
// Only the used template types are instantiated.
//
// ============================================================
//
// FUNCTION TEMPLATE vs MACROS
// ---------------------------
//
// Macros:
// - No type checking
// - Debugging hard
//
// Templates:
// - Type safe
// - Compile-time checked
// - Preferred
//
// ============================================================
//
// OVERLOADING vs TEMPLATES
// -----------------------
//
// Overloading:
// - Different functions per type
//
// Templates:
// - One generic definition
//
// Templates reduce code duplication.
//
// ============================================================
//
// TEMPLATE SPECIALIZATION (PREVIEW)
// --------------------------------
//
// Allows custom behavior for specific types
//
// Covered in Day 17.
//
// ============================================================
//
// PERFORMANCE
// -----------
//
// Templates have ZERO runtime cost
// All decisions happen at compile time.
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Templates enable generic programming"
// "Function templates are instantiated at compile time"
// "Templates are type-safe alternatives to macros"
//
// ============================================================
//
// WHEN TO USE FUNCTION TEMPLATES?
// -------------------------------
//
// ✔ Same logic for multiple types
// ✔ Type-safe generic algorithms
// ✔ STL-style programming
//
// ❌ When logic differs significantly per type
//
// ============================================================
//
// END OF DAY 15 — FUNCTION TEMPLATES THEORY
// ============================================================


