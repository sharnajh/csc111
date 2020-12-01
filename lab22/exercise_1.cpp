// Sharna Hossain
// CSC 111
// Lab 22 | exercise_1.cpp

// Write a program that asks the user to enter integers as inputs to be
// stored in the variables 'a' and 'b' respectively. There are also two
// integer pointers named ptrA and ptrB. Assign the values of 'a' and
// 'b' to ptrA and ptrB respectively, and display them.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Initialize main vars
    int a, b;
    for (int i = 1; i <= 2; i++)
    {
        char varName = i == 1 ? 'a' : 'b';
        cout << "Enter variable " << varName << ": ";
        cin >> (i == 1 ? a : b);
    }

    // Initialize pointer vars
    int *ptrA = &a, *ptrB = &b;

    // Display pointer values
    for (int i = 1; i <= 2; i++)
    {
        string varName = i == 1 ? "Pointer a" : "Pointer b";
        cout << varName << ": " << (i == 1 ? *ptrA : *ptrB);
        cout << endl;
    }

    return 0;
}