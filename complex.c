#include "complex.h"

double getNorm(const ComplexNumber number) {
	double x = number.real;
	double y = number.imag;
	return x * x + y * y;
}

double getAbs(const ComplexNumber number) {
	return sqrt(getNorm(number));
}