#ifndef COMPLEX_H
#define COMPLEX_H


class complex
{


    public:
        complex();
        complex(double, double);
        complex operator+(complex);
        complex operator*(complex a);
        bool operator!=(complex a);
        void Print();


    private:
        double Real, Imaginary;
};

#endif // COMPLEX_H
