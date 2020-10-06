// Sharna Hossain
// CSC 111
// Lab 7 || costco.cpp

#include <iostream>
using namespace std;

int main()
{
    char cellphone, carrier;

    cout << "Welcome to the Wireless Dept. of Costco!\n";

    cout << "First, select your cellphone:\n";
    cout << "A - Samsung Note 10\n";
    cout << "B - iPhone 11\n";
    cout << "C - Google Pixel\n";
    cout << "Select your model from the options above: ";
    cin >> cellphone;

    cout << "Second, select your carrier:\n";
    cout << "A - Verizon\n";
    cout << "B - T-Mobile\n";
    cout << "C - Boost\n";
    cout << "D - Sprint\n";
    cout << "Select your carrier from the options above: ";
    cin >> carrier;

    if (cellphone == 'A' && carrier == 'A')
    {
        cout << "Promotion is $300";
    }
    else if (cellphone == 'B' && carrier == 'A')
    {
        cout << "Promotion is $100";
    }
    else if ((cellphone == 'A' || cellphone == 'B') && carrier == 'B')
    {
        cout << "Promotion is half the price of the second phone";
    }
    else if (carrier == 'C')
    {
        cout << "Promotion is a free Apple watch with your purchase";
    }
    else if (cellphone == 'C' && (carrier == 'A' || carrier == 'B'))
    {
        cout << "Promotion is one free year of YouTube";
    }
    else if (cellphone == 'B' && carrier == 'D')
    {
        cout << "Promotion is a half-off discount on an iPhone 8";
    }
    else
    {
        cout << "There is no promotion available with your purchase.";
    }

    return 0;
}