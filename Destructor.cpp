#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// CONSTRUCTOR
/*
A destructor in C++ is a special member function within a class that is automatically called when an object of that class goes out of scope or is explicitly deleted. The purpose of a destructor is to perform cleanup operations, such as releasing resources like memory, file handles, network connections, or any other resources that were allocated during the object's lifetime.

Destructors are named with the class name preceded by a tilde (~) and have no parameters or return type. They are useful for ensuring that objects release any resources they hold before being destroyed, which helps prevent resource leaks and ensures proper cleanup.
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
    // Paramaterized Constructor
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
    void print()
    {
        cout << "rollNo : " << rollNo << endl;
        cout << "grade : " << grade << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor Called!!" << endl;
    }
};

int main()
{
    // object created statically
    Student s(10); // For static obj allocation Destructor called Automatically
                   // Call goes as Student.s()

    // object created dynamically
    Student *S = new Student; //// Call goes as Student.S()
    delete S;                 // For dynamically obj allocation Destructor has to called manually

    return 0;
}