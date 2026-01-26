// ============================================================
// DAY 16 — CLASS TEMPLATES (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS A CLASS TEMPLATE?
// ------------------------
//
// A class template allows defining a GENERIC CLASS
// that can work with DIFFERENT DATA TYPES.
//
// It is a blueprint for generating type-specific classes.
//
// ============================================================
//
// WHY CLASS TEMPLATES EXIST?
// -------------------------
//
// Without class templates:
//
// - Same class logic duplicated for int, float, string, etc.
// - Code repetition
// - Hard to maintain
//
// Class templates solve this by:
//
// - Writing class ONCE
// - Reusing it for MULTIPLE types
//
// ============================================================
//
// CORE IDEA
// ---------
//
// Class Template = Class Blueprint
// Actual class is GENERATED at compile time
// when template is INSTANTIATED.
//
// ============================================================
//
// BASIC SYNTAX
// ------------
//
// template <typename T>
// class ClassName { };
//
// 'T' is a PLACEHOLDER TYPE
//
// ============================================================
//
// TEMPLATE PARAMETERS
// -------------------
//
// Types of parameters:
//
// 1. Type parameters
//    template <typename T>
//
// 2. Non-type parameters
//    template <int N>
//
// 3. Multiple parameters
//    template <typename T, typename U>
//
// ============================================================
//
// CLASS TEMPLATE INSTANTIATION
// ----------------------------
//
// Happens at COMPILE TIME
//
// Only instantiated when used.
//
// Each type → separate class.
//
// ============================================================
//
// MEMBER FUNCTIONS
// ----------------
//
// Can be:
// - Defined inside class
// - Defined outside using template syntax
//
// ============================================================
//
// TEMPLATE TYPE DEDUCTION
// ----------------------
//
// Unlike function templates:
// - Class templates DO NOT support full type deduction
// - Types must be explicitly specified (mostly)
//
// ============================================================
//
// DEFAULT TEMPLATE ARGUMENTS
// --------------------------
//
// Allows default type if none specified
//
// Similar to default function parameters
//
// ============================================================
//
// SPECIALIZATION (PREVIEW)
// -----------------------
//
// Allows custom implementation for specific types
//
// Covered in Day 17.
//
// ============================================================
//
// HEADER FILE RULE
// ----------------
//
// Class templates MUST be fully defined in header files
// because:
//
// - Compiler needs full definition to instantiate
//
// ============================================================
//
// CLASS TEMPLATES vs INHERITANCE
// ------------------------------
//
// Templates:
// - Compile-time polymorphism
// - Faster
//
// Inheritance:
// - Runtime polymorphism
// - Uses virtual functions
//
// ============================================================
//
// PERFORMANCE
// -----------
//
// Zero runtime overhead
// Everything resolved at compile time
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Class templates enable generic data structures"
// "Templates are resolved at compile time"
// "STL containers are class templates"
//
// ============================================================
//
// WHEN TO USE CLASS TEMPLATES?
// ----------------------------
//
// ✔ Generic containers
// ✔ Type-independent logic
// ✔ Compile-time polymorphism
//
// ❌ When behavior differs significantly by type
//
// ============================================================
//
// END OF DAY 16 — CLASS TEMPLATES THEORY
// ============================================================

