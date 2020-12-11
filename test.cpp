#include <cstdlib>
#include <string>
#include <iostream>
<<<<<<< HEAD
// using namespace std;
// void function(string str, int pOs);
// int main()
// {
//   string names = "Adam and Eve";
//   function(names, 0);
//   return 0;
// }
// void function(string str, int pOs)
// {
//   //cout << str.length() << "\t" << pOs << "\t" << str[pOs] << "\n";
//   if (pOs < str.length())
//   {
//     function(str, pOs + 1);
//     cout << str[pOs];
//   }
// }

using namespace std;

void fun2(int n)
{
  if (n == 0)
    return;
  fun2(n / 2);
  printf("%d", n % 2);
}

void test_a(int n)
{
  cout << n << " ";
  if (n > 0)
    test_a(n - 2);
}

int main()
{
  fun2(21);
  test_a(4);
  return 0;
}
=======
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
>>>>>>> 62a7be34624b8f42ad76cf3461f427f2c0b8525b
