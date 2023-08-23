#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Hero
{
    // properties
    // DATA MEMBER
    int health; // 4 bytes // BY DEFAULT PRIVATE
};
class Villan
{
    // properties
    // DATA MEMBER
    // int health; // 4 bytes // by default private

    // Class is Empty
    // for empty class memmory assign "1 byte"
};
class Student
{
    // properties
public:
    // DATA MEMBER
    int rollNo; // 4 bytes
    char grade; // 1 bytes

    // private:
    //     char grade; // 1 bytes //Private Members can only accessed inside class only

    void print()
    {
        cout << grade << endl;
    }
};
int main()
{
    // creation of Object
    Hero h1;
    Villan v1;
    Student s1;

    cout << "size :" << sizeof(h1) << endl; // 4 byte
    cout << "size :" << sizeof(v1) << endl; // 1 byte
    cout << "size :" << sizeof(s1) << endl; // 8 byte

    cout << "rollNo : " << s1.rollNo << endl; // both gives garbage value because to value is assigned
    cout << "grade : " << s1.grade << endl;
    return 0;
}