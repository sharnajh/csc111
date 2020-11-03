// Sharna Hossain
// CSC 111
// Lab 15 | findmax.cpp

// Write a program that in the main function asks
// the user to enter two numbers and then call
// FindMax function to determine which number is greater.

#include <iostream>
using namespace std;

int FindMax(int num1, int num2)
{
    return num1 > num2 ? num1 : num2;
}

int main()
{
    int num1, num2;

    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    cout << "Max number is " << FindMax(num1, num2) << endl;

    return 0;
}