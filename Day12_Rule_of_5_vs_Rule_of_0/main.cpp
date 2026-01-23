// ============================================================
// DAY 13 — RULE OF 5 vs RULE OF 0 (THEORY IN CODE FORM)
// ============================================================
//
// WHAT PROBLEM DO THESE RULES SOLVE?
// ---------------------------------
//
// Classes that manage resources (memory, file, mutex, socket)
// must define how those resources are:
//
// - Copied
// - Moved
// - Destroyed
//
// If not handled properly →
// - Double delete
// - Memory leaks
// - Undefined behavior
//
// ============================================================
//
// RULE OF 5
// ---------
//
// If a class MANAGES A RESOURCE and defines ANY ONE of these:
//
// 1. Destructor
// 2. Copy Constructor
// 3. Copy Assignment Operator
//
// Then it SHOULD define ALL FIVE:
//
// 1. Destructor
// 2. Copy Constructor
// 3. Copy Assignment Operator
// 4. Move Constructor
// 5. Move Assignment Operator
//
// ============================================================
//
// WHY RULE OF 5 EXISTS?
// --------------------
//
// Because:
//
// - Compiler-generated copy may do shallow copy
// - Shallow copy of raw resource → double delete
// - Move operations are NOT auto-generated if copy is defined
//
// ============================================================
//
// THE FIVE FUNCTIONS (RESPONSIBILITIES)
// ------------------------------------
//
// 1. Destructor
//    - Release resource
//
// 2. Copy Constructor
//    - Deep copy resource
//
// 3. Copy Assignment
//    - Clean old resource
//    - Deep copy new resource
//
// 4. Move Constructor
//    - Steal resource
//    - Nullify source
//
// 5. Move Assignment
//    - Release current resource
//    - Steal resource
//    - Nullify source
//
// ============================================================
//
// WHEN TO USE RULE OF 5?
// ---------------------
//
// ✔ Class owns raw pointer
// ✔ Class owns file handle
// ✔ Class owns mutex / socket
// ✔ Manual resource management
//
// ============================================================
//
// RULE OF 0
// ---------
//
// If a class does NOT manage resources directly,
// and instead uses:
//
// - std::vector
// - std::string
// - std::unique_ptr
// - std::shared_ptr
//
// Then:
//
// 👉 DO NOT write destructor
// 👉 DO NOT write copy/move functions
//
// Let compiler handle everything.
//
// ============================================================
//
// WHY RULE OF 0 IS BETTER?
// -----------------------
//
// - Less code
// - Fewer bugs
// - Exception safe
// - Leverages RAII types
//
// ============================================================
//
// RULE OF 0 DESIGN PHILOSOPHY
// --------------------------
//
// "Do not manage resources manually"
//
// Instead:
// - Wrap resources in RAII objects
// - Compose using standard library types
//
// ============================================================
//
// RULE OF 3 (HISTORICAL)
// ---------------------
//
// Before C++11:
//
// 1. Destructor
// 2. Copy Constructor
// 3. Copy Assignment
//
// Move semantics did not exist.
//
// Rule of 3 evolved into Rule of 5.
//
// ============================================================
//
// COMPARISON SUMMARY
// ------------------
//
// Rule of 5:
// - More code
// - Manual resource control
// - Higher risk
//
// Rule of 0:
// - Minimal code
// - Safer
// - Modern C++ style
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "If you manage resources, follow Rule of 5"
// "If you use RAII types, follow Rule of 0"
// "Rule of 0 is preferred in Modern C++"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Prefer RULE OF 0
// Use RULE OF 5 only when unavoidable
//
// ============================================================
//
// END OF DAY 13 — RULE OF 5 vs RULE OF 0
// ============================================================

