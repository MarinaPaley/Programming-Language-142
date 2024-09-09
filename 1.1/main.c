//#define _USE_MATH_DEFINES // for C
#include <math.h>
#include <stdio.h>

/**
* @brief рассчитывает выражение а по формуле
* @param x - значение константы х
* @return рассчитанное значение
*/
double getA(const double x);

/**
* @brief рассчитывает выражение b по формуле
* @param x - значение константы х
* @param y - значение константы y
* @param a - значение константы a
* @return рассчитанное значение
*/
double getB(const double x, const double y, const double a);

/**
* @brief Точка входа в программу.
* @return 0, в случае успеха.
*/
int main()
{
	const double x = 0.1;
	const double y = 0.2;
	const double a = getA(x);
	printf("a = %f\n", a);
	printf("b = %f\n", getB(x, y , a));
	return 0;
}

double getA(const double x)
{
	return pow(x,2);
}

double getB(const double x, const double y, const double a)
{
	return cbrt(x + y) + a;
}
