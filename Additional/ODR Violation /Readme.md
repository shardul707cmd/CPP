# ODR Violation

A minimal demonstration of the **C++ One Definition Rule (ODR)**.

## What This Demonstrates

The same non-inline function is defined in two different `.cpp` files:

- `first.cpp`
- `second.cpp`

Both files contain a definition of:

```cpp
int duplicateFunction()