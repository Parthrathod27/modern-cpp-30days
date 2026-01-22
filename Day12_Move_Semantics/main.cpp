// ============================================================
// DAY 12 — MOVE SEMANTICS (THEORY IN CODE FORM)
// ============================================================
//
// WHAT IS MOVE SEMANTICS?
// ----------------------
// Move Semantics is a Modern C++ feature that allows
// resources to be TRANSFERRED instead of COPIED.
//
// It avoids unnecessary deep copies of heavy resources
// like:
// - dynamic memory
// - file handles
// - sockets
//
// ============================================================
//
// WHY MOVE SEMANTICS EXIST?
// ------------------------
//
// Before C++11:
//
// - Objects were always COPIED
// - Copying was EXPENSIVE
// - Temporary objects caused performance loss
//
// Example problem:
//
// Object A owns a resource
// Object B is created from A
//
// COPY:
// - Allocate new resource
// - Duplicate data
// - Slow
//
// MOVE:
// - Steal resource from A
// - A becomes empty
// - Fast
//
// ============================================================
//
// CORE IDEA
// ---------
//
// Move = Transfer ownership
// Copy = Duplicate ownership
//
// After move:
// - Source object is left in a VALID but EMPTY state
//
// ============================================================
//
// MOVE CONSTRUCTOR
// ----------------
//
// Syntax:
//   ClassName(ClassName&& other)
//
// Purpose:
// - Takes resource from temporary object
// - Avoids deep copy
//
// Key rules inside move constructor:
// - Steal pointer/resource
// - Set other's resource to nullptr
//
// ============================================================
//
// MOVE ASSIGNMENT OPERATOR
// ------------------------
//
// Syntax:
//   ClassName& operator=(ClassName&& other)
//
// Purpose:
// - Replace existing resource with other's resource
//
// Steps:
// 1. Release current resource
// 2. Steal other's resource
// 3. Nullify other
//
// ============================================================
//
// rvalue REFERENCES (&&)
// ----------------------
//
// Types of values:
//
// lvalue:
// - Has name
// - Has address
//
// rvalue:
// - Temporary
// - No persistent name
//
// Move semantics works ONLY with rvalues
//
// ============================================================
//
// std::move
// ---------
//
// std::move DOES NOT MOVE anything
//
// It only:
// - Converts lvalue into rvalue reference
// - Allows move constructor / move assignment to be called
//
// ============================================================
//
// WHEN MOVE IS USED AUTOMATICALLY?
// --------------------------------
//
// - Returning objects from functions
// - Temporary objects
// - STL container reallocation
//
// ============================================================
//
// MOVE vs COPY (DECISION RULE)
// ----------------------------
//
// If object is:
// - Temporary → MOVE
// - Named → COPY (unless std::move used)
//
// ============================================================
//
// RELATION WITH SMART POINTERS
// ----------------------------
//
// unique_ptr:
// - COPY ❌
// - MOVE ✅
//
// shared_ptr:
// - COPY ✅ (increments count)
// - MOVE ✅
//
// ============================================================
//
// PERFORMANCE BENEFITS
// --------------------
//
// Move:
// - O(1)
// - Pointer swap
//
// Copy:
// - O(n)
// - Memory allocation + duplication
//
// ============================================================
//
// RULE OF 5
// ---------
//
// If a class manages a resource and defines any of:
//
// - Destructor
// - Copy constructor
// - Copy assignment
//
// Then it SHOULD define:
//
// - Move constructor
// - Move assignment
//
// ============================================================
//
// RULE OF 0
// ---------
//
// If a class uses RAII types (vector, string, smart pointers):
// - No need to write destructor
// - Compiler-generated moves are enough
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "Move semantics transfers ownership instead of copying"
// "std::move enables move semantics"
// "Moved-from object is valid but empty"
// "unique_ptr relies on move semantics"
//
// ============================================================
//
// WHEN TO IMPLEMENT MOVE?
// -----------------------
//
// ✔ Resource-managing classes
// ✔ Performance critical code
// ✔ Large objects
//
// ❌ Simple value types
//
// ============================================================
//
// END OF DAY 12 — MOVE SEMANTICS THEORY
// ============================================================

