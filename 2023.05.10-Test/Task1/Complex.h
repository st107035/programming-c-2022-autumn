#pragma once
#include<iostream>
#include<ostream>
class Complex {
private:
    double re;
    double im;
public:
    Complex(double re = 0, double im = 0) : re(re), im(im) {};
    Complex(const Complex& c) : re(c.re), im(c.im) {};
    ~Complex() {};

    Complex conj(double re, double im) const;
    double arg(double re, double im) const ;
    double abs(double re, double im) const;

    Complex operator=(const double& d);
    Complex operator+(const double& d);
    Complex operator-(const double& d);
    Complex operator/(const double& d);
    Complex operator*(const double& d);

    friend Complex operator+(const double& d, const Complex& c);
    friend Complex operator-(const double& d, const Complex& c);
    friend Complex operator*(const double& d, const Complex& c);
    friend Complex operator/(const double& d, const Complex& c);

    Complex operator=(const Complex& c);
    Complex operator+(const Complex& c);
    Complex operator-(const Complex& c);
    Complex operator*(const Complex& c);
    Complex operator/(const Complex& c);

    friend std::ostream& operator<<(std::ostream& stream, const Complex& c);
};