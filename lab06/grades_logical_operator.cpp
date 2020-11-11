// Sharna Hossain
// CSC 111
// Lab 6 | grades_logical_operator.cpp

#include <iostream>
using namespace std;

int main()
{
    int grade;
    string letter_grade;

    cout << "Enter a grade: ";
    cin >> grade;

    if (grade >= 60 && grade <= 62) {
        letter_grade = "D-";
    } else if (grade >= 63 && grade <= 66) {
        letter_grade = "D";
    } else if (grade >= 67 && grade <= 69) {
        letter_grade = "D+";
    } else if (grade >= 70 && grade <= 72) {
        letter_grade = "C-";
    } else if (grade >= 73 && grade <= 76) {
        letter_grade = "C";
    } else if (grade >= 77 && grade <= 79) {
        letter_grade = "C+";
    } else if (grade >= 80 && grade <= 82) {
        letter_grade = "B-";
    } else if (grade >= 83 && grade <= 86) {
        letter_grade = "B";
    } else if (grade >= 87 && grade <= 89) {
        letter_grade = "B+";
    } else if (grade >= 90 && grade <= 92) {
        letter_grade = "A-";
    } else if (grade >= 93) {
        letter_grade = "A";
    } else {
        letter_grade = "F";
    }

    cout << "Your grade is " << letter_grade << endl;

    return 0;
}