#include <iostream>
using namespace std;

int main()
{
    int A = 0;
    int B = -4;
    int C = 0;
    int D = 10;
    if (!((A==D)&&(A==C)||(B>D)||!(A>=B)&&((A<=C)&&(A>=0)))){
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}