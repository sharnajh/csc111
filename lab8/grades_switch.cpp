// Sharna Hossain
// CSC 111
// Lab 8 | grades_switch.cpp

#include <iostream>
using namespace std;

int main()
{
    int grade;
    cout << "Enter a grade (0-100): ";
    cin >> grade;

    if (grade >= 0 && grade <= 100)
    {
        switch (grade)
        {
        // Read about case ranges from this online resource:
        // https://www.geeksforgeeks.org/using-range-switch-case-cc/
        // case ranges compile "case 1 ... 3:" as "case 1: case 2: case 3:"
        case 90 ... 100:
            cout << "A\n";
            break;
        case 80 ... 89:
            cout << "B\n";
            break;
        case 70 ... 79:
            cout << "C\n";
            break;
        case 60 ... 69:
            cout << "D\n";
            break;
        default:
            cout << "F\n";
        }
    }
    else
    {
        cout << "ERROR: Invalid grade\n";
        cout << "Please rerun the program and enter a grade from 0-100\n";
    }

    return 0;
}