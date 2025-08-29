# Template Functions & Classes

## Overview
Templates in C++ make code reusable by allowing functions and classes to work with different data type.
Learn more about templates on [cppreference](https://en.cppreference.com/w/cpp/language/templates).
To see how templates expand during compilation, try [C++ Insights](https://cppinsights.io).

## Example
```cpp
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

## Problems
### Template Functions
#### 1. Print Elements
Write a template function `printElement` that prints a value.
Test with `int`, `double`, `string`.

#### 2. Swap Function
Write a template function `mySwap` that swaps two variables of any type.
Test it with `int`, `double`, and `string`.

#### 3. Sum of Array Elements
Write a template function `sumArray` that takes an array pointer of type `T*` and its size, and returns the sum of elements.
Try with `int*`, `double*`, and `string*`.

#### 4. Linear Search
Implement a template function `linearSearch` that takes an `std::vector<T>` and element `T` and searches for the first appearance of the element.
Try with `int`, `double`, and `string`.

### Template Classes
#### 1. Pair Class
Implement a template class `Pair<T1, T2>` that can hold two values of possibly different types.
Write a class method to print them.

#### 2. Array of fixed size
Create a template class `FixedArray<T, N>` that represents an array of fixed size `N` storing elements of type `T`.
Your class should provide:
* A method `set(int index, T value)` to assign a value at a given position.
* A method `get(int index)` to return the value at a given position.
* A method `size()` to return the size of the array.

Test it with `int`, `double`, and `string`.

#### 3. Matrix of fixed size
Create a template class `Matrix<T, N, M>` to represent a 2D `N`x`M` matrix of elements of type `T`.
The class should support the following:

* A method `set(int row, int col, T value)` to assign a value.
* A method `get(int row, int col)` to retrieve a value.
* A method `print()` to display the matrix in a grid format.
* Overload the `operator+` to add two matrices of the same size.
