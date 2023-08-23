#include <iostream>
using namespace std;
/*
In hybrid inheritance, there is a combination of one or more inheritance types. For instance, the combination of single and hierarchical inheritance. Therefore, hybrid inheritance is also known as multipath inheritance.

                    Vehical
                       |
                       Car    Racing
                          \ /
                          Ferrari
*/
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle\n";
    }
};
class Car : public vehicle
{
public:
    Car()
    {
        cout << "This is a car\n";
    }
};
class Racing
{
public:
    Racing()
    {
        cout << "This is for Racing\n";
    }
};
class Ferrari : public Car, public Racing
{
public:
    Ferrari()
    {
        cout << "Ferrari is a Racing Car\n";
    }
};
int main()
{
    Ferrari f;
    return 0;
}