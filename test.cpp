#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

// The listEvens function, take an integer n as input and return a vector
// containing all even numbers k with 0 <= k <= n. printVector function,
// simply prints the values in the vector.  Fill the blanks.

// vector<int> listEvens(int n)
// {
//     vector<int> result;
//     for (int k = 0; k <= n; k++)
//         if (k % 2 == 0) result.push_back(k);
//     return result;
// }

// void printVector(const vector<int> vec)
// {
//     cout << "The vector is";
//     if(vec.size() == 0)
//         cout << " empty";
//     else
//         for (int el : vec)
//             cout << ' ' << el;
//     cout << '\n';
// }

int main()
{

    class Yard
    {
    private:
        double length;

    public:
        Yard(double l)
        {
            length = l;
        }
        //double conversion function
        void operator double()
        {
            return length;
        }
    };
        return 0;
    }
