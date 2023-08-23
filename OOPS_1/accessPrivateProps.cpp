#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// GETER AND SETTER CONCEPT
class Student
{
    // properties
private:
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
    Student s1;

    // set private property
    s1.setGrade('Z');
    s1.setRoll(3);
    s1.setChangeRoll(3, 5);
    // get/access private property
    cout << "s1 Grade is: " << s1.getGrade() << endl;
    cout << "s1 RollNo is: " << s1.getRoll() << endl;

    // s1.rollNo = 3;
    // s1.grade = 'A';// PRIVATE

    // cout << "rollNo : " << s1.rollNo << endl;
    // cout << "grade : " << s1.grade << endl;//PRIVATE

    return 0;
}