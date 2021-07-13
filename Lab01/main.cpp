#include <iostream>

using namespace std;

int main ()
{
  int i,n;
  int * p;
  cout << "Please Allocate the array size :  ";
  cin >> i;

  p= new (nothrow) int[i];

    for (n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "Elements of Array : ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete[] p;

  return 0;
}
