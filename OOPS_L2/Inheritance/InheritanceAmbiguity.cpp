#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <iostream>
using namespace std;
/*
        A              B
        \             /
         derived_class
*/
// defining base_class A
class A
{
public:
    int data;

    void print_data()
    {
        cout << "Message from A!!" << endl;
    }
};

// defining base_class B
class B
{
public:
    void print_data()
    {
        cout << "Message from B!!" << endl;
    }
};

// deriving class from base classes A and B
class derived_class : public A, public B
{
public:
    int data2;
    void print_message()
    {
        cout << "Message from C!!" << endl;
    }
};

int main()
{

    // creating object of the derived class
    derived_class obj;
    // obj.print_data(); // gives error

    //======== USE SCOPE RESOLUTION OPERATOR "::" ===============
    obj.A::print_data();
    obj.B::print_data();

    return 0;
}