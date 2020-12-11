#include <cstdlib>
#include <string>
#include <iostream>
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