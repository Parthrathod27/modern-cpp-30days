// ============================================================
// DAY 22 — std::algorithm (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS std::algorithm?
// ------------------------
//
// std::algorithm is a collection of
// GENERIC FUNCTIONS that operate on ranges.
//
// Algorithms do NOT own data.
// They work on iterators.
//
// ============================================================
//
// DESIGN PHILOSOPHY
// ------------------
//
// DATA        → containers (vector, list, array)
// OPERATIONS  → algorithms
//
// Separation of concerns
//
// ============================================================
//
// RANGE CONCEPT
// -------------
//
// Most algorithms take:
//
// begin_iterator, end_iterator
//
// This allows container-independence.
//
// ============================================================
//
// READ-ONLY ALGORITHMS
// --------------------
//
// - find
// - count
// - count_if
// - any_of
// - all_of
// - none_of
//
// These do NOT modify data.
//
// ============================================================
//
// MODIFYING ALGORITHMS
// --------------------
//
// - sort
// - reverse
// - rotate
// - transform
// - remove
//
// These modify container content.
//
// ============================================================
//
// SEARCHING ALGORITHMS
// ---------------------
//
// find
// find_if
// binary_search (sorted range)
//
// ============================================================
//
// SORTING ALGORITHMS
// -------------------
//
// sort        → O(n log n)
// stable_sort → maintains order
// partial_sort
//
// ============================================================
//
// REMOVE IDIOM (VERY IMPORTANT)
// ------------------------------
//
// remove does NOT erase elements.
// It shifts them to the end.
//
// Correct way:
// container.erase(remove(...), end)
//
// ============================================================
//
// TRANSFORM
// ----------
//
// Applies function to each element
// Stores result in destination
//
// Enables functional-style programming
//
// ============================================================
//
// PREDICATES
// -----------
//
// Predicate = function returning bool
//
// Used in:
// - find_if
// - count_if
// - remove_if
//
// Often implemented using lambdas
//
// ============================================================
//
// ALGORITHM COMPLEXITY
// --------------------
//
// Most algorithms are optimized
// and better than hand-written loops.
//
// ============================================================
//
// WHY USE std::algorithm?
// -----------------------
//
// - Less bugs
// - More readable
// - Highly optimized
// - STL-consistent
//
// ============================================================
//
// ALGORITHM + ITERATORS
// ---------------------
//
// Algorithms work on:
// - Input iterators
// - Forward iterators
// - Random access iterators
//
// Capability depends on algorithm
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Writing manual loops
// ❌ Forgetting remove-erase idiom
// ❌ Using sort on list
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Algorithms work on ranges, not containers"
// "remove does not erase"
// "std::algorithm improves readability"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Prefer std::algorithm over raw loops
//
// ============================================================
//
// END OF DAY 22 — std::algorithm
// ============================================================

