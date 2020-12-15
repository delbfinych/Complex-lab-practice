#include "complex.h"

double getNorm(const ComplexNumber number) {
	double x = number.real;
	double y = number.imag;
	return x*x + y*y;
}

double getAbs(const ComplexNumber number ) {
	return sqrt(getNorm(number));
}

ComplexNumber mult(const ComplexNumber first, const ComplexNumber second) {
	double x1 = first.real;
	double y1 = first.imag;
	double x2 = second.real;
	double y2 = second.imag;
	ComplexNumber res;
	res.real = x1*x2 - y1*y2;
	res.imag = x1*y2 + y1*x2;
	return res;
}

