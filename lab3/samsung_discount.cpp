// Sharna Hossain
// CSC111
// samsung_discount.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double amount, net;
    const double DISCOUNT = .10;

    cout << "Welcome to Samsung!\n";
    cout << "Please enter the amount of your order: ";
    cin >> amount;

    net = amount - (DISCOUNT * amount);
    
    cout << setprecision(2) << fixed;
    cout << "After a discount of 10%, your total is $" << net << endl;
    cout << "Thank you for shopping with Samsung!\n";

    return 0;
}