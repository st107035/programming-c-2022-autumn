#include "Complex.h"
#include<ostream>
#include<cmath>
 
Complex Complex::conj(double re, double im) const
{
	return Complex(re, - im);
}

double Complex::abs(double re, double im) const
{
	return sqrt(re * re + im * im);
}

double Complex::arg(double re, double im) const
{
	return atan2(re, im);
}


Complex Complex::operator= (const double& d)
{
	return Complex(d, 0);
}

Complex Complex::operator+ (const double& d)
{
	return Complex(re + d, im);
}

Complex Complex::operator- (const double& d)
{
	return Complex(re - d, im);
}

Complex Complex::operator* (const double& d)
{
	return Complex(re * d, im * d);
}

Complex Complex::operator/ (const double& d)
{
	return Complex(re / d, im / d);
}


Complex operator+ (const double& d, const Complex& c)
{
	return Complex(d + c.re, c.im);
}

Complex operator- (const double& d, const Complex& c)
{
	return Complex(d - c.re, c.im);
}

Complex operator* (const double& d, const Complex& c)
{
	return Complex(d * c.re, c.im * d);
}

Complex operator/ (const double& d, const Complex& c)
{
	return (d * c.conj(c.re, c.im) / (c.abs(c.re, c.im) * c.abs(c.re, c.im)));
}


Complex Complex::operator= (const Complex& c)
{
	return Complex(c.re, c.im);
}

Complex Complex::operator+ (const Complex& c)
{
	return Complex(re + c.re, im + c.im);
}

Complex Complex::operator- (const Complex& c)
{
	return Complex(re - c.re, im - c.im);
}

Complex Complex::operator* (const Complex& c)
{
	return Complex((re * c.re) - (im * c.im), (re * c.im) + (im * c.re));
}

Complex Complex::operator/ (const Complex& c)
{
	Complex c1 = Complex(re, im);
	return (c1 * conj(c.re, c.im)) / (abs(c.re, c.im) * abs(c.re, c.im));
}

std::ostream& operator<< (std::ostream& stream, const Complex& c)
{
	stream << "(" << c.re << ", " << c.im << ")";
	return stream;
}