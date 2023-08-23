#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/*
speak()   A   B  bark()
           \ /
            C  speak() and bark()
*/
class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "BARKING" << endl;
    }
};

class Human : public Animal
{
public:
    string color;

public:
    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};

// Multiple Inheritance
class Hybrid : public Animal, public Human
{
};
int main()
{

    Hybrid h1;
    h1.speak();
    h1.bark();

    return 0;
}