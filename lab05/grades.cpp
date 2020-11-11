// Sharna Hossain
// CSC 111
// Lab 5 | grades.cpp

#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2, grade3;
    double average;

    cout << "Enter grade 1: ";
    cin >> grade1;
    cout << "Enter grade 2: ";
    cin >> grade2;
    cout << "Enter grade 3: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / 3.0;

    if (average > 80)
    {
        cout << "Excellent!";
    }
    else
    {
        cout << "You should study more.";
    }
    return 0;
}