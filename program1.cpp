// This program calculates the user's pay.

// The preprocessor searches for special lines that begin with the # symbol. 
// These lines contain commands that cause the preprocessor to modify the 
// source code in some way. In other words, a preprocessor directive.
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    // Get the hourly pay rate.
    cout << "How much do you get paid per hour? ";
    cin >> rate;

    // Calculate the pay.
    pay = hours * rate;

    // Display the pay.
    cout << "You have earned $" << pay << endl; 
    return 0;
}

// Invoke preprocessor, compiler, and linker:
// g++ -o program1 program1.cpp

// To execute the new machine code file, all you need 
// to do is type ./ and the machine code file name:
// ./program1.out