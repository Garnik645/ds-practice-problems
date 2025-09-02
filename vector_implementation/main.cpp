#include <iostream>
#include <cstddef>
#include <cassert>

template<typename T>
class Vector {
    // your code goes here...
};

namespace test {
    template <typename T1, typename T2>
    void assertEqual(const T1& value, const T2& expectedValue, int line, char const* file)
    {
        if(value != expectedValue)
        {
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            std::cerr << "The expected value was " << expectedValue << ", but got " << value << " instead.\n\n";
            std::cerr << "Line: " << line << "\n";
            std::cerr << "File: " << file << "\n";
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            assert(false);
        }
    }


    template <typename T1, typename T2>
    void assertGreater(const T1& value, const T2& expectedValue, int line, char const* file)
    {
        if(value <= expectedValue)
        {
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            std::cerr << "The value was expected to be greater than " << expectedValue << ", but was " << value << " instead.\n\n";
            std::cerr << "Line:" << line << "\n";
            std::cerr << "File: " << file << "\n";
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            assert(false);
        }
    }

    template <typename T1, typename T2>
    void assertLess(const T1& value, const T2& expectedValue, int line, char const* file)
    {
        if(value >= expectedValue)
        {
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            std::cerr << "The value was expected to be less than " << expectedValue << ", but was " << value << " instead.\n\n";
            std::cerr << "Line:" << line << "\n";
            std::cerr << "File: " << file << "\n";
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            assert(false);
        }
    }

    void assertBool(bool condition, int line, char const* file)
    {
        if(!condition)
        {
            std::cerr << "\n\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            std::cerr << "The condition was expected to be true, but was false instead.\n\n";
            std::cerr << "Line: " << line << "\n";
            std::cerr << "File: " << file << "\n";
            std::cerr << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
            assert(false);
        }
    }
}

// POINT 1: Basic Constructors
/*
namespace test {
    struct BasicConstructorsTest
    {
        BasicConstructorsTest()
        {
            Vector<int> vec1;
            Vector<double> vec2(10);
            Vector<char> vec3(30, 'x');

            assertEqual(vec1.size(), 0, __LINE__, __FILE__);
            assertEqual(vec2.size(), 10, __LINE__, __FILE__);
            assertEqual(vec3.size(), 30, __LINE__, __FILE__);
        }
    };

    static BasicConstructorsTest basicConstructorsTest;
}
*/

// POINT 2: Initializer List Construction
/*
namespace test {
    struct InitializerListConstructorTest
    {
        InitializerListConstructorTest()
        {
            Vector<int> vec{1, 2, 3};

            assertEqual(vec.size(), 3, __LINE__, __FILE__);
            assertEqual(vec[0], 1, __LINE__, __FILE__);
            assertEqual(vec[1], 2, __LINE__, __FILE__);
            assertEqual(vec[2], 3, __LINE__, __FILE__);
        }
    };

    static InitializerListConstructorTest initializerListConstructorTest;
}
*/

int main()
{
    std::cout << "All tests passed!";
    return 0;
}