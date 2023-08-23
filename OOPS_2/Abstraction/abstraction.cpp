#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
abstraction: Implementation hiding
#####Abstraction using Classes
Abstraction can be implemented using classes in C++. We can group data members and member functions in a class using the available access specifiers. A Class can choose which data members are exposed to the outside world and which are hidden.

######Abstraction using Access Specifiers
In C++, access specifiers provide the foundation for implementing Abstraction. We can use access specifiers to impose restrictions on class members. Access specifiers in C++:

Public: members and methods declared as public can be accessed from anywhere in the program.
Private: members and methods declared as private can only be accessed within the class.
*/
class ExampleAbstraction
{
private:
    // Here we have hidden (made 'a' & 'b' unaccessible) from
    // the outside world.
    int a, b;

public:
    // method to set values of
    // private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    ExampleAbstraction obj;
    obj.set(30, 40);
    obj.display();
    return 0;
}