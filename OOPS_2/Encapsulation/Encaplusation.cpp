#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Encapsulation is one of the fundamental concepts of object-oriented programming (OOP), and it is a key principle in C++ as well as many other programming languages. Encapsulation refers to the bundling of data (attributes or properties) and the methods (functions) that operate on that data into a single unit, known as a class. It also involves controlling the access to that data and methods, ensuring that they can only be accessed and modified in certain ways.

In C++, encapsulation is achieved using classes and access specifiers. Here's how it works:

Class: A class is a blueprint for creating objects. It defines the structure and behavior of the objects that will be created from it.

Data Members (Attributes/Properties): These are the variables that hold the data within the class. They represent the state of the object.

Member Functions (Methods): These are the functions defined within the class that operate on the data members. They define the behavior of the object.

Access Specifiers: In C++, there are three access specifiers: public, private, and protected. These specifiers determine the level of access other classes and functions have to the members of a class.

Public: Members declared as public are accessible from anywhere, including outside the class. They can be accessed using the object of the class.

Private: Members declared as private are accessible only from within the class itself. They cannot be accessed directly from outside the class. Private members are typically used to encapsulate the internal implementation details.

Protected: Members declared as protected have similar access rules as private members, but they are accessible within derived classes as well.
*/

// data members(properties/state) + member function(method/behaviour) wrapped in single entity called "Class"

// Fully Encapsulated Classes:- all data member are "private",accessed inside class only

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return age;
    }
    int setAge(int a)
    {
        this->age = a;
    }
};

int main()
{
    Student s1;
    s1.setAge(22);
    cout << s1.getAge() << endl;
    cout << "Everything goes well" << endl;

    return 0;
}