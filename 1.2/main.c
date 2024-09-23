#include <stdio.h>
#include <locale.h>

/**
* @brief Рассчитывает площадь прямоугольника.
* @param length Длина прямоугольника
* @param width Ширина прямоугольника
* @return Площадь прямоугольника.
*/
double GetArea(const double length, const double width);

/**
* @brief Рассчитывает периметр прямоугольника.
* @param length Длина прямоугольника
* @param width Ширина прямоугольника
* @return Периметр прямоугольника.
*/
double GetPerimetr(const double length, const double width);

/**
* @brief Считывает вещественное число.
* @return Возвращает вещественное число.
*/
double Input();

int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("Введите длину прямоугольника.");
	double length = Input();
	puts("Введите ширину прямоугольника.");
	double width = Input();
	printf_s("Площадь прямоугольника %lf", GetArea(length, width));
	printf_s("\nПериметр прямоугольника %lf", GetPerimetr(length, width));

	return 0;
}

double GetArea(const double length, const double width)
{
	return length * width;
}

double GetPerimetr(const double length, const double width)
{
	return (length + width) * 2;
}

double Input()
{
	double value = 0.0;
	scanf_s("%lf", &value);
	return value;
}
