// Sharna Hossain
// CSC 111
// Lab 8 | grades_switch.cpp

#include <iostream>
using namespace std;

int main()
{
    int grade;
    char letter_grade;
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
            letter_grade = 'A';
            break;
        case 80 ... 89:
            letter_grade = 'B';
            break;
        case 70 ... 79:
            letter_grade = 'C';
            break;
        case 60 ... 69:
            letter_grade = 'D';
            break;
        default:
            letter_grade = 'F';
        }

        cout << "Your grade is " << letter_grade << endl;
    }
    else
    {
        cout << "ERROR: Invalid grade\n";
        cout << "Please rerun the program and enter a grade from 0-100\n";
    }

    return 0;
}