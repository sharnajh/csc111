// Sharna Hossain
// CSC111
// grades_average.cpp

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int grade1, grade2, grade3, average;
    const int TOTAL = 3;

    cout << "Enter your name: ";
    getline(cin,name);

    cout << "Enter your first exam grade: ";
    cin >> grade1;
    cout << "Enter your second exam grade: ";
    cin >> grade2;
    cout << "Enter your third exam grade: ";
    cin >> grade3;

    average = (grade1 + grade2 + grade3) / TOTAL;
    cout << "Hello " << name << "!\n";
    cout << "According to your test grades," << endl;
    cout << "your average is " << average << endl;

    return 0;
}