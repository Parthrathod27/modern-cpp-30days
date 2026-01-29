// ============================================================
// DAY 19 — DECLTYPE (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS decltype?
// ------------------
//
// decltype is a keyword used to
// EXTRACT THE TYPE of an expression at compile time.
//
// It answers the question:
// 👉 "Is expression ka exact type kya hai?"
//
// ============================================================
//
// BASIC SYNTAX
// ------------
//
// decltype(expression) variable;
//
// Example:
// int x = 10;
// decltype(x) y = 20;   // y is int
//
// ============================================================
//
// WHY decltype EXISTS?
// ---------------------
//
// auto removes references & const sometimes
// decltype preserves EXACT TYPE
//
// decltype is more precise than auto
//
// ============================================================
//
// auto vs decltype
// ----------------
//
// auto        → value-based deduction
// decltype    → expression-based deduction
//
// ============================================================
//
// IMPORTANT RULES OF decltype
// ----------------------------
//
// RULE 1️⃣
// decltype(variable_name)
//
// returns the declared type of variable
//
// int x;
// decltype(x) a;        // int
//
// ------------------------------------------------------------
//
// RULE 2️⃣
// decltype((expression))  ← NOTE DOUBLE PAREN
//
// returns reference type if expression is lvalue
//
// int x;
// decltype((x)) b = x;   // int&
//
// ============================================================
//
// VERY IMPORTANT DIFFERENCE
// --------------------------
//
// decltype(x)    → int
// decltype((x))  → int&
//
// SINGLE () vs DOUBLE (()) MATTERS
//
// ============================================================
//
// decltype WITH REFERENCES
// -------------------------
//
// int x = 10;
// int& ref = x;
//
// decltype(ref) a = x;     // int&
// decltype((ref)) b = x;  // int&
//
// ============================================================
//
// decltype WITH CONST
// -------------------
//
// const int cx = 10;
//
// decltype(cx) a = 10;     // const int
// decltype((cx)) b = cx;  // const int&
//
// ============================================================
//
// decltype WITH EXPRESSIONS
// --------------------------
//
// int x = 10;
// int y = 20;
//
// decltype(x + y) sum;   // int (temporary value)
//
// Because x + y is rvalue
//
// ============================================================
//
// decltype WITH FUNCTIONS
// ------------------------
//
// decltype can extract return type of function call
//
// int foo();
//
// decltype(foo()) x;     // int
//
// ============================================================
//
// TRAILING RETURN TYPE (PRE-C++14 USE CASE)
// -----------------------------------------
//
// template<typename T, typename U>
// auto add(T a, U b) -> decltype(a + b);
//
// decltype allows return type deduction
// when parameters are not yet known
//
// ============================================================
//
// decltype + auto (BEST PRACTICE)
// -------------------------------
//
// decltype(auto)
//
// Used to preserve references + const
//
// Example:
// decltype(auto) x = expr;
//
// ============================================================
//
// decltype(auto) vs auto
// -----------------------
//
// auto            → may drop reference
// decltype(auto)  → exact type preservation
//
// ============================================================
//
// STL USE CASES
// -------------
//
// - iterator return types
// - lambda return deduction
// - template meta-programming
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Confusing decltype(x) with decltype((x))
// ❌ Overusing when auto is enough
// ❌ Forgetting reference preservation
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "decltype gives exact type of expression"
// "decltype((x)) yields reference"
// "decltype(auto) preserves reference & const"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Use:
// auto           → when type doesn't matter
// decltype       → when exact type matters
//
// ============================================================
//
// END OF DAY 19 — DECLTYPE
// ============================================================

