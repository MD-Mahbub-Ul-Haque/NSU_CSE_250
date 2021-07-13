#include <iostream>
#include"complex.h"
//#include "complex.cpp"
using namespace std;

int main()
{
    double x1,y1,x2,y2;
    cout<<"Enter the real part of z1 complex number : ";
    cin>>x1;
    cout<<"Enter the imaginary part of z1 complex number : ";
    cin>>y1;
    cout<<"Enter the real part of z2 complex number : ";
    cin>>x2;
    cout<<"Enter the imaginary part of z2 complex number : ";
    cin>>y2;

    complex z1(x1,y1), z2(x2,y2);
    cout<<"z1 = ";
    z1.Print();
    cout<<"z2 = ";
    z2.Print();

    complex z3 = z1+z2;

    complex z4 = z1*z2;


    bool check = (z1 != z2);
    cout<< "Addition of Z1 and Z2 , z1+z2 = ";
    z3.Print();
    cout<< "Multipication of Z1 and Z2 , z1*z2 = ";
    z4.Print();
    cout<< "Checking if z1 and z2 are equal or not?  "<<endl;

    cout<<(check?"Equal":"Not equal")<<endl;


    return 0;
}

