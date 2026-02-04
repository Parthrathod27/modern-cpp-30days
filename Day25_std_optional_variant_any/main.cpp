// ============================================================
// DAY 25 — std::optional, std::variant, std::any
// ============================================================
//
// BIG IDEA
// --------
//
// These types help represent:
// - absence of value
// - multiple possible types
// - type-erased values
//
// They make APIs SAFER than raw pointers.
//
// ============================================================
//
// PART 1 — std::optional
// ----------------------
//
// WHAT IS std::optional?
//
// optional<T> represents either:
// - a valid T
// - or no value
//
// Think: "value may or may not exist"
//
// ============================================================
//
// WHY optional EXISTS?
// --------------------
//
// Before optional:
// - nullptr
// - magic values (-1, -999)
// - bool + output parameter
//
// These are unsafe or unclear.
//
// optional makes intent explicit.
//
// ============================================================
//
// optional STATES
// ---------------
//
// - engaged (has value)
// - disengaged (empty)
//
// ============================================================
//
// ACCESSING VALUE
// ----------------
//
// - has_value()
// - operator*
// - value()
// - value_or(default)
//
// ============================================================
//
// WHEN TO USE optional?
// ---------------------
//
// - Function may fail
// - Lookup may not find result
// - Value is not mandatory
//
// ============================================================
//
// PART 2 — std::variant
// ---------------------
//
// WHAT IS std::variant?
//
// variant<T1, T2, ...> stores
// EXACTLY ONE value from a fixed set of types.
//
// Think: TYPE-SAFE UNION
//
// ============================================================
//
// WHY variant EXISTS?
// -------------------
//
// union problems:
// - no type safety
// - manual tracking
//
// variant is safe + expressive.
//
// ============================================================
//
// variant PROPERTIES
// ------------------
//
// - One active type at a time
// - Fixed set of types
// - Stored inline (no heap)
//
// ============================================================
//
// ACCESSING variant
// -----------------
//
// - std::get<T>()
// - std::get_if<T>()
// - std::visit
//
// ============================================================
//
// std::visit
// -----------
//
// Visitor pattern for variant
// Executes based on active type
//
// ============================================================
//
// WHEN TO USE variant?
// --------------------
//
// - Multiple possible return types
// - State machines
// - Parsing results
//
// ============================================================
//
// PART 3 — std::any
// -----------------
//
// WHAT IS std::any?
//
// any can store ANY type
// (runtime type-erased)
//
// Think: SAFE void*
//
// ============================================================
//
// WHY any EXISTS?
// ----------------
//
// void* problems:
// - unsafe casts
// - no type info
//
// any stores type information.
//
// ============================================================
//
// ACCESSING any
// --------------
//
// - std::any_cast<T>()
//
// Throws exception if wrong type
//
// ============================================================
//
// COST OF any
// ------------
//
// - Heap allocation possible
// - Runtime type checking
//
// Use only when type is UNKNOWN
// until runtime.
//
// ============================================================
//
// optional vs variant vs any
// ---------------------------
//
// optional → value or nothing
// variant  → one of few known types
// any      → any type (unknown)
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Using any when variant is enough
// ❌ Forgetting empty optional check
// ❌ Using variant like inheritance
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "optional represents absence of value"
// "variant is type-safe union"
// "any is runtime type-erased container"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Prefer:
// optional → variant → any
// (in this order)
//
// ============================================================
//
// END OF DAY 25 — optional, variant, any
// ============================================================

