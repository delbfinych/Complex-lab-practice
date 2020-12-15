#ifndef COMPLEX_H
#define COMPLEX_H
#define PI 3.14159265358979323846
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    double real;
    double imag;
} ComplexNumber;


/** 
 * @param Exponential  abs * e^(i * arg)
 * @param Polar   abs * (cos(arg) + isin(arg))
 * @param Default   (real, imag)
 * */
typedef enum  {
    Exponential,
    Polar, 
    Default 
} Format;


/**
 * @brief Создаёт форматированный вид комплексного числа.
 * @param number комплексное число.
 * @param format формат вывода number, принимает значения: Exponential, Polar, Default.
 * @return Возвращает указатель на форматированную строку.
*/
char* complexToString(const ComplexNumber number, Format format);


/**
 * @return Возвращает абсолютную величину number.
*/
double getAbs(const ComplexNumber number);


/**
 * @return Возвращает аргумент number в радианах,
 *         лежащий в полуинтервале (-pi; pi].
*/
double getArg(const ComplexNumber number);


/**
 * @return Возвращает норму number.
*/
double getNorm(const ComplexNumber number){
	return (pow(number.real, 2) + pow(number.imag, 2));
}


/**
 * @return Возвращает сопряженное для number.
*/
ComplexNumber conjugate(const ComplexNumber number);


/**
 * @brief Возводит комплексное число в целую степень.
 * @param basis возводимое в степень число.
 * @param exponent степень.
 * @return Возвращает результат возведения в степень.
*/
ComplexNumber complexPow(const ComplexNumber basis, int exponent);



/**
 * @return Возвращает массив корней n-степени из number.
*/
ComplexNumber* complexRoot(const ComplexNumber number, const size_t n);


/**
 * @return Возвращает сумму first и second.
*/
ComplexNumber sum(const ComplexNumber first, const ComplexNumber second);


/**
 * @return Возвращает разность minuend и subtrahend.
*/
ComplexNumber subtract(const ComplexNumber minuend, const ComplexNumber subtrahend);


/**
 * @return Возвращает произведение first и second.
*/
ComplexNumber mult(const ComplexNumber first, const ComplexNumber second);


/**
 * @return Возвращает частное dividend и divisor.
*/
ComplexNumber divide(const ComplexNumber dividend, const ComplexNumber divisor);


/**
 * @return Возвращает true, если first и second равны, иначе false.
*/
bool complexCmp(const ComplexNumber first, const ComplexNumber second);

#endif
