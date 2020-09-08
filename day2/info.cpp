// CSC 111
// Sharna Hossain
// Assignment 1A

// Write a cpp program that prints your information
// (name, family name, id number, major, year of study)
// on screen in separate lines.

#include <iostream>
using namespace std;
int main()
{
    string name = "Sharna";
    string family_name = "Hossain";
    string cunyID = "23446706";
    string major = "Computer Science";
    string year_of_study = "Freshman";

    cout << "My name is " << name + " " + family_name << endl;
    cout << "My CUNY ID is " << cunyID << endl;
    cout << "I am majoring in " << major << endl;
    cout << "This is my " << year_of_study << " year of study" << endl;

    return 0;
}