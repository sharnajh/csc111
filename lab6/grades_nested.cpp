// Sharna Hossain
// CSC 111
// Lab 6 | grades_nested.cpp

#include <iostream>
using namespace std;

int main()
{
    int grade;
    string letter_grade;

    cout << "Enter a grade: ";
    cin >> grade;

    if (grade >= 60)
    {
        letter_grade = "D-";
        if (grade >= 63)
        {
            letter_grade = "D";
            if (grade >= 67)
            {
                letter_grade = "D+";
                if (grade >= 70)
                {
                    letter_grade = "C-";
                    if (grade >= 73)
                    {
                        letter_grade = "C";
                        if (grade >= 77)
                        {
                            letter_grade = "C+";
                            if (grade >= 80)
                            {
                                letter_grade = "B-";
                                if (grade >= 83)
                                {
                                    letter_grade = "B";
                                    if (grade >= 87)
                                    {
                                        letter_grade = "B+";
                                        if (grade >= 90)
                                        {
                                            letter_grade = "A-";
                                            if (grade >= 93)
                                            {
                                                letter_grade = "A";
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        letter_grade = "F";
    }

    cout << "Your grade is " << letter_grade << endl;

    return 0;
}