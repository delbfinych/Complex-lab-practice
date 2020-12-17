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

static ComplexNumber multInverse(const ComplexNumber number) {
	double norm = getNorm(number);
	double real = number.real / norm;
	double imag = number.imag / norm;
	return (ComplexNumber) { real, -imag };
}

ComplexNumber divide(const ComplexNumber dividend, const ComplexNumber divisor) {
	ComplexNumber inversed = multInverse(divisor);
	return (ComplexNumber) mult(inversed, dividend);
}

ComplexNumber complexPow(const ComplexNumber basis, int exponent) {
	double abs = pow(getAbs(basis), exponent);
	double arg = getArg(basis) * exponent;
	return (ComplexNumber) { abs * cos(arg), abs * sin(arg) };
}	

ComplexNumber sum(const ComplexNumber first, const ComplexNumber second) {
	double real = first.real + second.real;
	double imag = first.imag + second.imag;
	return (ComplexNumber) { real, imag };
}