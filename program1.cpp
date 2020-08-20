// This program calculates the user's pay.

// The preprocessor searches for special lines that begin with the # symbol. 
// These lines contain commands that cause the preprocessor to modify the 
// source code in some way.
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hours? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
}

// Compile by running:
// g++ -o program1 program1.cpp