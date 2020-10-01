// Sharna Hossain
// CSC111
// percentages.cpp

#include <iostream>
using namespace std;

void get_percent(int num, double percent)
{
    double res = num * percent;
    int percentage = percent * 100;

    cout << percentage << " percent of " << num << " is " << res << endl;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    get_percent(num1, .10);
    get_percent(num2, .20);
    get_percent(num3, .30);

    return 0;
}