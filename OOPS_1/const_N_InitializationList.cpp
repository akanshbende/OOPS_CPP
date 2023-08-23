#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
In C++, the const keyword is used to indicate that a variable, function parameter, member function, or return type should not be modified. It is used to establish immutability or read-only behavior for different program elements. The const keyword can be applied in several contexts:
*/
//-----------------------------------------------------------------------------
// 1.Constant Variables: When you declare a variable as const, it means that its value cannot be changed after initialization.
const int x = 5;
x = 10; // Error, cannot modify a const variable

//-----------------------------------------------------------------------------

// 2.Constant Function Parameters: When you pass a parameter to a function as const, it ensures that the function cannot modify the value of the parameter.
void foo(const int value)
{
    // value = 10;  // Error, cannot modify a const parameter
}

//-----------------------------------------------------------------------------

// 3.Constant Member Functions: When you declare a member function as const in a class, it indicates that the function will not modify any non-static members of the class. This allows you to call the function on const objects.
class MyClass
{
public:
    int getValue() const
    {
        // memberVar = 10;  // Error, cannot modify non-static members in a const member function
        return memberVar;
    }

private:
    int memberVar;
};

//-----------------------------------------------------------------------------

// 4.Constant Return Types: A function can also have a constant return type. This is used to indicate that the returned value should not be modified.
const int getConstantValue()
{
    return 42;
}

/*
Using the const keyword helps in maintaining code correctness, preventing unintended modifications, and enabling better optimization opportunities by allowing the compiler to make certain assumptions about immutability.

Additionally, const can be used with pointers and references to specify that the pointed-to or referred-to value should not be modified:
*/

const int *ptr; // Pointer to a constant integer
int const *ptr; // Equivalent syntax

int x = 5;
int y = 10;
int *const ptr = &x; // Constant pointer to an integer
*ptr = 7;            // Allowed
ptr = &y;            // Error, the pointer itself is constant

int const *const ptr = &x; // Constant pointer to a constant integer

//-------------------------------initialization list --------------------------
// In C++, the initialization list is used in constructors to initialize the member variables of a class. It is a special syntax that allows you to set the initial values of member variables when the object is created. Initialization lists are often preferred over assigning values to members within the constructor body because they can lead to more efficient and optimized code execution.
class MyClass
{
public:
    // Constructor with initialization list
    MyClass(int aValue, double bValue) : a(aValue), b(bValue)
    {
        // Constructor body (if needed)
    }

private:
    int a;
    double b;
};

// In this example, the constructor of the MyClass class takes two parameters, aValue and bValue, and uses an initialization list to directly initialize the member variables a and b. The initialization list comes after the colon (:) and before the constructor body. This can be more efficient than assigning values within the constructor body, especially for objects or classes with complex constructors.

// Initialization lists are particularly useful when dealing with objects that require specific construction, like constant members or objects with no default constructor. They also help ensure that members are initialized before the constructor body begins executing.

//-----------------------------------------------------------------------------

class Example
{
public:
    Example(int x, int y) : a(x), b(y), c(42)
    {
        // Constructor body (if needed)
    }

private:
    int a;
    int b;
    const int c;
};

class ComplexObject
{
public:
    ComplexObject(int value) : ptr(new int(value))
    {
        // Constructor body (if needed)
    }

    ~ComplexObject()
    {
        delete ptr;
    }

private:
    int *ptr;
};
// In the above examples, the initialization list is crucial for properly initializing the constant member 'c' in 'Example' and for directly constructing the dynamically allocated integer pointed to by ptr in ComplexObject.

int main()
{

    return 0;
}