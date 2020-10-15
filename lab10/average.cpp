// Sharna Hossain
// CSC 111
// Lab 10 | average.cpp

#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2, grade3;
    const int MIN = 0,
              MAX = 100;
    const double TOTAL = 3.0;
    double average;
    char again;

    do
    {
        cout << "Enter three grades from 0-100: ";
        cin >> grade1 >> grade2 >> grade3;

        while (!(grade1 >= MIN) || !(grade1 <= MAX) ||
               !(grade2 >= MIN) || !(grade2 <= MAX) ||
               !(grade3 >= MIN) || !(grade3 <= MAX))
        {
            cout << "ERROR: Invalid grade value!\n";
            cout << "Enter three grades from 0-100: ";
            cin >> grade1 >> grade2 >> grade3;
        }

        average = (grade1 + grade2 + grade3) / TOTAL;
        cout << "The average is " << average << endl;

        cout << "Do you want to average new grades? (Y/N) \n";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}