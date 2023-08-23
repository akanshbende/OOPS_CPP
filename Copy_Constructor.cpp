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
private:
    char grade;

public:
    int rollNo;
    // by default constructor get created/we also can creat our own
    Student()
    {
        cout << "Constructor Called !!!" << endl;
    }

    //----------------- Paramaterized Constructor------------------------
    Student(int roll)
    {
        cout << "this : " << this << endl;
        this->rollNo = roll; // 42 min// "this" store current objct address
        // cout << "Constructor Called !!!" << endl;
    }
    Student(int roll, int grade)
    {
        cout << "this : " << this << endl;
        this->rollNo = roll; // 42 min// "this" store current objct address
        // cout << "Constructor Called !!!" << endl;
        this->grade = grade;
    }

    //--------------------------Copy Constructor-------------------------
    Student(Student &temp)
    {

        this->rollNo = temp.rollNo; // temp is statically allocated so "." operator
        this->grade = temp.grade;
    }

    void print()
    {
        cout << "rollNo : " << rollNo << endl;
        cout << "grade : " << grade << endl;
    }
};

int main()
{
    // object created statically
    Student s(10); // when object is created Cunstructor is always called!!
                   // Call goes as Student.s()
    cout << "Address of s : " << &s << endl;
    cout << "---------------------------------" << endl;

    Student s1(10, 'A');
    s1.print();

    // Copy Constructor
    Student s2(s1);
    s2.print();

    //

    // object created dynamically
    Student *S = new Student; //// Call goes as Student.S()

    return 0;
}