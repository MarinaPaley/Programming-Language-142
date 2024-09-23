#include <stdio.h>
#include <locale.h>

/**
* @brief ������������ ������� ��������������.
* @param length ����� ��������������
* @param width ������ ��������������
* @return ������� ��������������.
*/
double GetArea(const double length, const double width);

/**
* @brief ������������ �������� ��������������.
* @param length ����� ��������������
* @param width ������ ��������������
* @return �������� ��������������.
*/
double GetPerimetr(const double length, const double width);

/**
* @brief ��������� ������������ �����.
* @return ���������� ������������ �����.
*/
double Input();

int main(void)
{
	setlocale(LC_ALL, "Russian");
	puts("������� ����� ��������������.");
	double length = Input();
	puts("������� ������ ��������������.");
	double width = Input();
	printf_s("������� �������������� %lf", GetArea(length, width));
	printf_s("\n�������� �������������� %lf", GetPerimetr(length, width));

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
