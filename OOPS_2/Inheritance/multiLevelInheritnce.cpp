#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
        A   speak()
        |
        B   bark()
        |
        c   color(),bark(),color()
*/
class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};

class Dog : public Animal
{
};

class GermanShepherd : public Dog
{
};
int main()
{
    GermanShepherd g;
    g.speak();

    return 0;
}