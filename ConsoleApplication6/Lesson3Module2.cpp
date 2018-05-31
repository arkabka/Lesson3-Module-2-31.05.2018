#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include<math.h>
#include<time.h>

void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int n = 0;
	printf("Введите номер задания: ");
	scanf("%d", &n);

	if (n == 1)
	{
		int X = 0, Y = 0, Z = 0;
		X = 1 + rand() % 100;
		Y = 1 + rand() % 100;
		Z = 1 + rand() % 100;

		printf("x = %d  y = %d  z = %d\n", X,Y,Z);

		if (X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0)
			printf("Условие является истинным для Х = %d\n", X);
		else if (X % 5 != 0 && Y % 5 == 0 && Z % 5 != 0)
			printf("Условие является истинным для Y = %d\n", Y);
		else if (X % 5 != 0 && Y % 5 != 0 && Z % 5 == 0)
		
			printf("Условие является истинным для Z = %d\n", Z);
		
		else if (X % 5 != 0 && Y % 5 != 0 && Z % 5 != 0)
		
			printf("НЕТ ИСТИНЫ ДЛЯ ЧИСЛА\n");
		

	}
	else if (n == 2)
	{
		int x, y, z;
		
		x = 1 + rand() % 1000;
		y = 1 + rand() % 1000;
		z = 1 + rand() % 1000;

		printf("x = %d, y = %d, z =%d\n", x, y, z);

		if (x > 80 || y > 80 || z > 80)
			printf("Условие истино\n");
		
		else
			printf("Условие ложно\n");
		
	}
	else if (n == 3)
	{
		int a;

		a = -20 + rand() % 40;

		printf("a = %d\n", a);

		if ((a >= -10 && a >= -1) || (a >= 2 && a <= 15))
			printf("Принадлежит\n");
		else 
			printf("Не принадлежит\n");
	}
	else if (n == 4)
	{
		int a;
		a = 1 + rand() % 1000;
		printf("a = %d\n", a);

		if ((a >= 999 && a < 9999) && (a != 4999))
			printf("Условие верно\n");
		else
			printf("Условие неверно\n");
	}
	else if (n == 5)
	{
		int a, b, c, d
	}


}