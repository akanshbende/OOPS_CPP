#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// CONSTRUCTOR
/*
A constructor in C++ is a special member function within a class that is automatically called when an object of that class is created. It initializes the object's data members and performs any necessary setup operations. Constructors have the same name as the class and do not have a return type, not even void.

Constructors play a crucial role in ensuring that objects are properly initialized before they are used, preventing issues like accessing uninitialized memory. They allow you to set default values for members, perform allocation of resources, and establish the initial state of an object.
*/
class Student
{
    // properties
public:
    // DATA MEMBER
    char grade;     // 1 bytes
    int rollNo;     // 4 bytes
    int changeRoll; // 4 bytes
public:
    void print()
    {
        cout << grade << endl;
    }

    // GETTER
    int getRoll()
    {
        return rollNo;
    }
    char getGrade()
    {
        return grade;
    }

    // SETTER
    void setRoll(int r)
    {
        rollNo = r;
    }
    void setGrade(char g)
    {
        grade = g;
    }
    void setChangeRoll(int r, int cr)
    {
        if (rollNo == r)
        {
            changeRoll = cr;
            rollNo = changeRoll;
        }
        else
        {
            cout << "Invalid User" << endl;
        }
    }
};
int main()
{
    // Static Allocation
    Student s;
    s.setGrade('Z');
    s.setRoll(8);
    cout << "s Grade is: " << s.grade << endl;
    cout << "s RollNo is: " << s.rollNo << endl;

    // Dynamic Allocation
    Student *s1 = new Student;
    s1->setGrade('A');
    s1->setRoll(9);

    cout << "s1 Grade is: " << (*s1).grade << endl;   // *s1 de-refrencing
    cout << "s1 rollNo is: " << (*s1).rollNo << endl; // *s1 de-refrencing
    cout << "s1 Grade is: " << s1->grade << endl;
    cout << "s1 rollNo is: " << s1->rollNo << endl;

    // cout << "s SIZE is: " << sizeof(s) << endl; // 12 insted of 9

    return 0;
}