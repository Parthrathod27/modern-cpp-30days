// ============================================================
// DAY 24 — std::function & std::bind (THEORY IN CODE FORM)
// ============================================================
//
// BIG PICTURE
// -----------
//
// This day is about CALLABLE ABSTRACTION.
//
// C++ allows many "callables":
// - free functions
// - lambdas
// - function objects (functors)
// - member functions
//
// std::function unifies them under ONE TYPE.
//
// ============================================================
//
// WHAT IS std::function?
// ----------------------
//
// std::function is a TYPE-ERASED wrapper
// that can store ANY callable
// matching a given function signature.
//
// Example signature:
// std::function<int(int, int)>
//
// ============================================================
//
// WHY std::function EXISTS?
// --------------------------
//
// Problem before std::function:
//
// - Function pointers are limited
// - Cannot store lambdas with captures
// - Cannot store functors easily
//
// std::function solves all of this.
//
// ============================================================
//
// TYPE ERASURE (IMPORTANT CONCEPT)
// --------------------------------
//
// std::function hides the concrete type
// of the callable.
//
// You only care about:
// - input types
// - return type
//
// Implementation details are erased.
//
// ============================================================
//
// BASIC SYNTAX
// ------------
//
// std::function<Return(Args...)> f;
//
// Example:
// std::function<void(int)> callback;
//
// ============================================================
//
// WHAT CAN std::function STORE?
// ------------------------------
//
// - Free functions
// - Lambdas (with or without capture)
// - Functor objects
// - Bound member functions
//
// ============================================================
//
// COST OF std::function
// ----------------------
//
// - Small runtime overhead
// - Possible heap allocation
//
// Because of type erasure
//
// Use when FLEXIBILITY is needed,
// not in tight performance loops.
//
// ============================================================
//
// WHAT IS std::bind?
// ------------------
//
// std::bind creates a NEW callable
// by binding arguments to an existing one.
//
// It performs PARTIAL FUNCTION APPLICATION.
//
// ============================================================
//
// BASIC IDEA OF std::bind
// -----------------------
//
// Given:
// f(a, b, c)
//
// bind allows:
// g(b, c) = f(10, b, c)
//
// Some arguments fixed,
// some left as placeholders.
//
// ============================================================
//
// PLACEHOLDERS
// ------------
//
// std::placeholders::_1
// std::placeholders::_2
//
// Represent arguments passed at call time.
//
// ============================================================
//
// WHY std::bind EXISTS?
// ---------------------
//
// - Adapt function signatures
// - Bind member functions
// - Create callbacks
//
// ============================================================
//
// std::bind vs Lambda
// -------------------
//
// Lambda:
// - Clear
// - Readable
// - Preferred in modern C++
//
// std::bind:
// - Older style
// - Harder to read
// - Still useful for member functions
//
// Modern rule:
// Prefer LAMBDA over bind
// unless bind is simpler.
//
// ============================================================
//
// MEMBER FUNCTION BINDING
// -----------------------
//
// Member functions need an object instance.
// std::bind can bind the object.
//
// ============================================================
//
// CALLBACK SYSTEM USE CASE
// ------------------------
//
// std::function is commonly used for:
// - event handlers
// - callbacks
// - plugin systems
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Using std::function in hot loops
// ❌ Overusing std::bind instead of lambda
// ❌ Forgetting placeholders
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "std::function uses type erasure"
// "It can store any callable"
// "std::bind performs partial application"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Use:
// - templates → for zero overhead
// - std::function → for runtime flexibility
//
// ============================================================
//
// END OF DAY 24 — std::function & std::bind
// ============================================================

