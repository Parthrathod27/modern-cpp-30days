## Day 2: nullptr vs NULL (Modern C++)

This example demonstrates why `nullptr` is safer than `NULL` in Modern C++.

### Key Learnings
- `NULL` is typically an integer literal (0), not a real pointer
- Using `NULL` can cause function overloading ambiguity
- `nullptr` is a type-safe null pointer literal introduced in C++11
- `nullptr` works correctly with raw pointers and smart pointers

### Recommendation
Always prefer `nullptr` over `NULL` in Modern C++ code.
