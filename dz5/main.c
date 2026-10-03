#include <stdio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_CTYPE,"RUS");
	//Ввод данных
	double x, y, z, f; 

	printf("Введите x:");
	scanf("%lf", &x);

	printf("Введите y:");
	scanf("%lf", &y);

	printf("Введите z:");
	scanf("%lf", &z);

	//Выражение 
	f = (pow(y + pow(x - 1.0, 1. / 3), 1. / 4)) / (fabs(x - y) * (pow(sin(z), 2) + tan(z)));
	//Ответ
	printf("Ответ:%.5lf", f);

	return 0;

}