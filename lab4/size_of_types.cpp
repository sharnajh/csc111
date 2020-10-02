// Sharna Hossain
// CSC111
// Lab 4 | size_of_types.cpp

#include <iostream>
using namespace std;

int main()
{
    string t = "The size of";
    string b = " bytes\n";

    cout << t << "(char) is: " << sizeof(char) << b;
    cout << t << "(short) is: " << sizeof(short) << b;
    cout << t << "(int) is: " << sizeof(int) << b;
    cout << t << "(long) is: " << sizeof(long) << b;
    cout << t << "(long long) is: " << sizeof(long long) << b;
    cout << t << "(float) is: " << sizeof(float) << b;
    cout << t << "(double) is: " << sizeof(double) << b;
    cout << t << "(long double) is: " << sizeof(long double) << b;
    cout << t << "(bool) is: " << sizeof(bool) << b;
    
    return 0;
}