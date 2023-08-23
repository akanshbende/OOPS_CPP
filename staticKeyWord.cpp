#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//----------------------------------------------------------------------
// Data member belong to class can accessed without need to create any object :
// static static member VARIABLE  does not belong to any object it belong to class.
// value of static  member VARIABLE ble is equal for any object of that class
// static member FUNCTION dont have "this" keyword which is pointer to current object.
// static member FUNCTION can access only static member variables

//----------------------------------------------------------------------
//================================ 1.Static Member Variables:

// When the static keyword is used to declare a member variable within a class, it becomes a static member variable. Static member variables are shared among all instances of the class, meaning they are not duplicated for each object. They are initialized once and persist throughout the program's lifetime.

class MyClass
{
public:
    static int count; // Declaration of a static member variable
};

int MyClass::count = 0; // Initialization of the static member variable
/*
        a.int: Specifies the data type of the static member variable count. In this case, it's an integer.

        b.MyClass::count: This syntax indicates that count is a static member variable of the class MyClass. The :: operator is used to access the member of a class from outside the class scope.

        c.= 0;: Initializes the static member variable count with the value 0.
*/
// Usage
MyClass obj1;
MyClass obj2;

// obj1.count++;    // Modifies the same count for obj2 as well
//----------------------------------------------------------------------
class MathUtility1
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
};

// Usage
int result1 = MathUtility1::add(5, 3);

//============================== 2.Static Member Functions :
//     When the 'static' keyword is used to define a member function within a class,
//     it becomes a static member function.Static member functions are not associated with any particular instance of the class;
// they can be called using the class name without creating an object.
// static member FUNCTION dont have "this" keyword which is pointer to current object.
// static member FUNCTION can access only static member variables
class MathUtility
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }
};

// Usage
int result = MathUtility::add(5, 3);

//----------------------------------------------------------------------
/*
3.Static Local Variables :
When the static keyword is used to declare a local variable within a function, it makes the variable's value persist across function calls. The variable is initialized only once and retains its value between function calls.
*/
void counter()
{
    static int count = 0; // Static local variable
    count++;
    cout << "Count: " << count << endl;
}
//----------------------------------------------------------------
class Hero
{

public:
    int level;
    static int time;

    static int randon()
    {
        return time;
    }
};
int Hero::time = 9;
// int main()
// {
//     counter(); // Count: 1
//     counter(); // Count: 2
//     counter(); // Count: 3
//     return 0;
// }
//----------------------------------------------------------------
int main()
{
    cout << Hero::randon() << endl;

    return 0;
}