// ============================================================
// DAY 21 — STL CONTAINERS (THEORY IN CODE FORM)
// ============================================================
//
// WHAT ARE STL CONTAINERS?
// ------------------------
//
// Containers are data structures provided by STL
// to store and manage collections of elements.
//
// They handle:
// - memory management
// - resizing
// - traversal
//
// ============================================================
//
// MAIN CATEGORIES OF STL CONTAINERS
// --------------------------------
//
// 1️⃣ Sequence Containers
//    - vector
//    - deque
//    - list
//    - array
//    - forward_list
//
// 2️⃣ Associative Containers
//    - set / multiset
//    - map / multimap
//
// 3️⃣ Unordered Containers
//    - unordered_set
//    - unordered_map
//
// 4️⃣ Container Adaptors
//    - stack
//    - queue
//    - priority_queue
//
// ============================================================
//
// VECTOR
// ------
//
// - Dynamic array
// - Contiguous memory
// - Fast random access
//
// Time Complexity:
// access      → O(1)
// push_back   → O(1) amortized
// insert mid  → O(n)
//
// When to use:
// - Most common choice
// - Cache-friendly
//
// ============================================================
//
// DEQUE
// -----
//
// - Double-ended queue
// - Fast insert/remove at both ends
// - Non-contiguous memory
//
// Time Complexity:
// push_front / push_back → O(1)
// random access          → O(1)
//
// When to use:
// - Need fast front + back operations
//
// ============================================================
//
// LIST
// ----
//
// - Doubly linked list
// - Non-contiguous memory
// - No random access
//
// Time Complexity:
// insert / erase → O(1)
// access         → O(n)
//
// When to use:
// - Frequent middle insert/delete
//
// ============================================================
//
// ARRAY
// -----
//
// - Fixed-size container
// - Stack-allocated
//
// Pros:
// - Fast
// - No dynamic allocation
//
// Cons:
// - Size fixed at compile time
//
// ============================================================
//
// FORWARD_LIST
// ------------
//
// - Singly linked list
// - Less memory than list
// - Forward traversal only
//
// ============================================================
//
// MAP
// ---
//
// - Key-value pairs
// - Ordered (Red-Black Tree)
//
// Time Complexity:
// insert / find / erase → O(log n)
//
// When to use:
// - Sorted data
//
// ============================================================
//
// SET
// ---
//
// - Unique keys
// - Ordered
//
// Same complexity as map
//
// ============================================================
//
// UNORDERED_MAP
// --------------
//
// - Hash table
// - No ordering
//
// Average Complexity:
// insert / find → O(1)
//
// Worst case:
// O(n) (hash collision)
//
// When to use:
// - Fast lookup
//
// ============================================================
//
// UNORDERED_SET
// --------------
//
// - Hash-based unique keys
// - No ordering
//
// ============================================================
//
// CONTAINER ADAPTORS
// ------------------
//
// stack
// - LIFO
//
// queue
// - FIFO
//
// priority_queue
// - Max heap by default
//
// ============================================================
//
// VECTOR vs LIST vs DEQUE (INTERVIEW)
// -----------------------------------
//
// vector → fast access, slow middle insert
// list   → slow access, fast insert
// deque  → balanced ends
//
// ============================================================
//
// MEMORY LAYOUT
// --------------
//
// vector → contiguous
// deque  → segmented
// list   → nodes with pointers
//
// ============================================================
//
// COMMON MISTAKES
// ---------------
//
// ❌ Using list when vector is enough
// ❌ Using map instead of unordered_map
// ❌ Ignoring cache locality
//
// ============================================================
//
// INTERVIEW ONE-LINERS
// -------------------
//
// "vector is default container"
// "unordered_map gives O(1) average lookup"
// "list has O(1) insert but poor cache locality"
//
// ============================================================
//
// GOLDEN RULE
// -----------
//
// Choose container based on:
// - access pattern
// - insertion/deletion frequency
// - memory layout
//
// ============================================================
//
// END OF DAY 21 — STL CONTAINERS
// ============================================================

