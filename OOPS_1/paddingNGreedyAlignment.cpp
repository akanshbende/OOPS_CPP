#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//--------------------------------- PADDING-------------------------------------
// In C++, "padding" refers to the additional memory that might be inserted between members of a struct or class to align them in memory. This alignment is often done to improve memory access efficiency and performance, especially on architectures that require data to be aligned at certain memory addresses for efficient access.
class Example
{
    char a;   // 1 byte
    int b;    // 4 bytes
    double c; // 8 bytes
};
// In this case, without any padding, the total size of the struct would be 1 + 4 + 8 = 13 bytes.However, due to alignment requirements, the actual size of the struct might be larger due to padding.The compiler might insert extra bytes after the char member to align the int member on a 4 - byte boundary and the double member on an 8 - byte boundary.This could result in a total size of 16 bytes:
// | a |padding| b | c             |
// |---|-------|---|---------------|
// |   |   3   |   |               |
//-----------------------Greedy/Maximal Alignment---------------------------
struct Example1
{
    double a; // 8-byte aligned
    int b;    // 4-byte aligned
    char c;   // 1-byte aligned
};
// Maximal alignment" refers to the highest alignment requirement among the basic data types on a particular platform. This alignment is often used when designing memory structures, such as structs or classes, to ensure that the members of the structure are aligned to meet the requirements of the platform for optimal memory access and performance.

// For example, if on a specific platform, the highest alignment requirement is 8 bytes (64-bit), then you would design your structures with maximal alignment by aligning all the members to 8-byte boundaries.

//-----------------------SOLUTION----------------------------------

//=================== 1. Using #pragma pack(1) Directive:======================
// #pragma pack(1) directive is used to avoid structure padding by forcing the compiler not to use structure padding and align the structure members end to end during the memory allocation process.
#include <stdio.h>
#pragma pack(1)
struct bag
{
    int x;
    char y;
    double z;
};

int main()
{
    struct bag var; //  variable declaration of type bag
                    //  size of the structure bag is displayed
    printf("The size of the var when structure padding is avoided is : %d", sizeof(var));
    return 0;
}
//=================================2. Using Attribute:==========================
#include <stdio.h>

struct bag // structure is declared namely 'bag'
{
    int x;
    char y;
    double z;
} __attribute__((packed));
; // attribute is used to avoid padding

//__attribute__((packed)) variable attribute
// The packed variable attribute specifies that a variable or structure field has the smallest possible alignment.

int main()
{
    struct bag var; // variable declaration of type base
                    // Displaying the size of the structure base
    printf("The size of the bag after using attributes is : %d", sizeof(var));

    return 0;
}

// int main()
// {
//     Example e1;
//     Example1 e11;

//     cout << "e1 SIZE is: " << sizeof(e1) << endl;   // 16 insted of 13
//     cout << "e11 SIZE is: " << sizeof(e11) << endl; // 16 insted of 13

//     return 0;
// }
