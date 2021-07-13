#include "complex.h"
#include <iostream>
using namespace std;


complex::complex()
{
    Real = 0;
    Imaginary = 0;
}
complex::complex(double r, double i)
{
    Real = r;
    Imaginary = i;
}
complex complex::operator+(complex a)
{
    complex t;
    t.Real = Real + a.Real;
    t.Imaginary = Imaginary + a.Imaginary;
    return t;
}
complex complex::operator*(complex a)
{
    complex c;
    c.Real = (Real*a.Real)-(Imaginary*a.Imaginary);
    c.Imaginary = (Real*a.Imaginary)+(Imaginary*a.Real);
    return c;
}
bool complex::operator!=(complex a)
{
    return (Real == a.Real && Imaginary == a.Imaginary);
}
void complex::Print()
{
    cout << Real<<"+"<< Imaginary <<"i" << endl;

}



