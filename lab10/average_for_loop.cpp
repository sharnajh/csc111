// Sharna Hossain
// CSC 111
// Lab 10 | average_for_loop.cpp

#include <iostream>
using namespace std;

int main()
{
    int sum, input;
    const int MIN = 0, MAX = 100;
    const double TOTAL = 3.0;
    double average;
    char again;

    do
    {
        sum = 0;
        for (int i = 0; i < TOTAL; i++)
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

        average = sum / TOTAL;
        cout << "The average is " << average << endl;

        cout << "Do you want to average new grades? (Y/N) \n";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    return 0;
}