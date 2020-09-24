// Sharna Hossain
// CSC 111
// Lab 5 | loan.cpp

#include <iostream>
using namespace std;

int main()
{
    string graduated, employed;
    double income;
    const double MIN_INCOME = 30000.0;

    cout << "Are you employed? (T/F): ";
    cin >> employed;
    cout << "Have you graduated? (T/F): ";
    cin >> graduated;
    cout << "Enter your annual income: ";
    cin >> income;

    if (employed == "T" && graduated == "T" && income > MIN_INCOME)
    {
        cout << "You qualify for a loan!";
    }
    else
    {
        cout << "Unfortunately, you do not qualify for a loan.";
    }

    return 0;
}