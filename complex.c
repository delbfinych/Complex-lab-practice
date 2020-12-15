#include "complex.h"
double getNorm(const ComplexNumber number) {
	return (pow(number.real, 2) + pow(number.imag, 2));
}