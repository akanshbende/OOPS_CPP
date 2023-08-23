#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
                 A
                /\
               B  C
              / \
             D   E
*/
// Hierarchical Inheritance
class A
{
public:
    void func1()
    {
        cout << "Inside FUnction 1" << endl;
    }
};
class B : public A
{
public:
    void func2()
    {
        cout << "Inside FUnction 2" << endl;
    }
};
class C : public A
{
public:
    void func3()
    {
        cout << "Inside FUnction 3" << endl;
    }
};
int main()
{
    A obj1;
    obj1.func1();

    B obj2;
    obj2.func1();
    obj2.func2();

    C obj3;
    obj3.func1();
    // obj3.func2(); // error as no relation of C with B
    obj3.func3();

    return 0;
}