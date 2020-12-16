#include <math.h>
#include "complex.h"

double getNorm(const ComplexNumber number) {
	double x = number.real;
	double y = number.imag;
	return x * x + y * y;
}

double getAbs(const ComplexNumber number) {
	return sqrt(getNorm(number));
}

ComplexNumber mult(const ComplexNumber first, const ComplexNumber second) {
	double real = first.real * second.real - first.imag * second.imag;
	double imag = first.real * second.imag + first.imag * second.real;
	return (ComplexNumber) { real, imag };
}

