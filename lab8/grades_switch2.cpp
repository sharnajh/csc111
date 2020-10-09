// Sharna Hossain
// CSC 111
// Lab 8 | grades_switch2.cpp

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
        // This solution works because grade is an int being divided
        // by the int 10, so the result will be an int, as reflected
        // in the possible cases.
        switch (grade/10)
        {
        case 10:
        case 9:
            letter_grade = 'A';
            break;
        case 8:
            letter_grade = 'B';
            break;
        case 7:
            letter_grade = 'C';
            break;
        case 6:
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