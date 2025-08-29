# Template Functions & Classes

## Overview
Templates in C++ make code reusable by allowing functions and classes to work with different data type.
Learn more about templates on [cppreference](https://en.cppreference.com/w/cpp/language/templates).
To see how templates expand during compilation, try [C++ Insights](https://cppinsights.io).

## Example
```cpp
#include <iostream>
using namespace std;

template <typename T>
T myMax(const T& a, const T& b) {
    return (a > b) ? a : b;
}

int main() {
    cout << myMax(3, 7) << "\n";       // 7
    cout << myMax(3.5, 2.1) << "\n";   // 3.5
    return 0;
}
```
