#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Polymorphism is a core concept in object-oriented programming that allows objects of different classes to be treated as objects of a common base class

C++ supports
two main types of polymorphism:
1.compile-time (or static) polymorphism and
2.runtime (or dynamic) polymorphism.
*/

/*-----------------Compile-Time Polymorphism (Static Polymorphism):-----------
Compile-time polymorphism is achieved through function overloading and operator overloading. It allows you to define multiple functions or operators with the same name but different parameter lists. The appropriate function or operator is chosen at compile time based on the arguments provided.

1.=====Function Overloading: Defining multiple functions in the same scope with the same name but different parameter types or numbers. The correct function is determined by the argument types during compilation.
                    class Math {
                        public:
                            int add(int a, int b) {
                                return a + b;
                            }

                            double add(double a, double b) {
                                return a + b;
                            }
                        };

2.======Operator Overloading: Overloading operators like +, -, *, etc., to work with user-defined types. You can define how operators behave for instances of your class.
                                class Complex {
                                public:
                                    Complex operator+(const Complex& other) {
                                        Complex result;
                                        result.real = this->real + other.real;
                                        result.imaginary = this->imaginary + other.imaginary;
                                        return result;
                                    }
                                };
*/

/* ------------------Runtime Polymorphism (Dynamic Polymorphism):-------------*/
/*
Runtime polymorphism is achieved through inheritance and virtual functions. It allows you to define a common interface in a base class and then override the behavior of those functions in derived classes. The appropriate function is determined at runtime, based on the actual object's type.

A.Virtual Functions: Declare a function in the base class as virtual, and then override it in derived classes using the override keyword. This allows the correct function to be called based on the actual type of the object.
                        class Shape {
                            public:
                                virtual void draw() {
                                    cout << "Drawing a shape." << endl;
                                }
                            };

                            class Circle : public Shape {
                            public:
                                void draw() override {
                                    cout << "Drawing a circle." << endl;
                                }
                            };

                            class Square : public Shape {
                            public:
                                void draw() override {
                                    cout << "Drawing a square." << endl;
                                }
                            };

B.Polymorphic Pointers and References: Use pointers or references of the base class type to refer to objects of derived classes. The appropriate derived class function will be called at runtime.
                            Shape* shape = new Circle();
                            shape->draw();  // Calls the draw() method of Circle
                            delete shape;

*/

// operator overloading

class B
{
public:
    int a;
    int b;
    int add()
    {
        return a + b;
    }

    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;
        cout << "output :" << value2 - value1 << endl;
    }
};
int main()
{
    B obj1, obj2;

    obj1.a = 7;
    obj2.b = 3;

    obj1 + obj2;

    return 0;
}