#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//        HUMAN        =Parent/Super Class
//        /   \         
//       MALE  WOMEN   =Child/Sub Class

/*
Base Class    Public Inheritance	Protected Inheritance    Private Inheritance

Public	         Public	                Protected	            Private
Protected	     Protected	            Protected           	Private
Private	      Not accessible	      Not accessible	     Not accessible

*/
class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human
{
public:
    string color;

    void sleep()
    {
        cout << "Male Sleeping" << endl;
    }
};

int main()
{
    Male m1;
    cout << m1.age << endl;
    cout << m1.weight << endl;
    cout << m1.height << endl;
    cout << m1.color << endl;

    m1.setWeight(85);
    cout << m1.weight << endl;
    m1.sleep();

    return 0;
}