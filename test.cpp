#include <iostream>
using namespace std;

int main()
{
    // int A = 0;
    // int B = -4;
    // int C = 0;
    // int D = 10;
    // if (!((A == D) && (A == C) || (B > D) || !(A >= B) && ((A <= C) && (A >= 0))))
    // {
    //     cout << "True";
    // }
    // else
    // {
    //     cout << "False";
    // }

    // int count;
    // for (count = 1; count <= 5; count++)
    // {
    //     cout << "Hello" << endl;
    // }
    // ^ Runs 5 times

    string best_boy;

    // Asks user who is the best boy and store in memory
    cout << "Who is the BEST BOY ever?? ";
    getline(cin, best_boy);

    // Checks if user inputted the correct BEST BOY
    while (best_boy != "Ipu")
    {
        cout << "THAT IS NOT BEST BOY\n";
        cout << "WHO IS THE BEST BOY?? ";
        getline(cin, best_boy);
    }
    
    cout << "YOU HAVE SELECTED THE BEST BOY!\n";

    return 0;
}