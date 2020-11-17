// Sharna Hossain
// CSC 111
// Lab 12 | students_grades.cpp

#include <iostream>
using namespace std;

int main()
{
    const int capacity = 10,
              MIN = 0,
              MAX = 100;
    const double numTotal = 3.0;

    for (int student = 1; student <= capacity; student++)
    {
        double sum = 0, 
               average;
        int input;

        cout << "*Recording grades for Student ";
        cout << student << "*" << endl;

        for (int i = 0; i < numTotal; i++)
        {
            cout << "Enter a grade from 0-100: ";
            cin >> input;

            while (!(input >= MIN) || !(input <= MAX))
            {
                cout << "ERROR: Invalid grade value!\n";
                cout << "Enter a grade from 0-100: ";
                cin >> input;
            }

            sum += input;
        }
        average = sum / numTotal;
        cout << "The average for Student " << student;
        cout << " is " << average << endl << endl;
    }

    return 0;
}