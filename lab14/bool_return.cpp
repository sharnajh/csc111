// Sharna Hossain
// CSC 111
// Lab 14 | bool_return.cpp

// Ask the user to enter an integer number and then by
// calling a boolean function(you can choose any name),
// determine if the number is divisible by 5 or not.

#include <iostream>
using namespace std;

bool div_by_five(int num)
{
    return num % 5 == 0 ? true : false;
}

int main()
{
    int num;
    bool answer;

    cout << "Enter any number: ";
    cin >> num;

    answer = div_by_five(num);

    cout << num << " is" << (answer ? " " : " NOT ") << "divisible by 5 \n";

    return 0;
}
