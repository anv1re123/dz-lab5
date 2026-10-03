# Домашнее задание к работе 5

## Условие задачи
Найти значение выражения:

<img width="211" height="83" alt="{0BF65904-42B1-468E-9579-84211D55065B}" src="https://github.com/user-attachments/assets/6a82e5ea-a3a5-419f-a7dc-0e87d9e37a5b" />

Если:
- `x` = `17.421`
- `y` = `10.365 × 10⁻³`
- `z` = ` 0.828 × 10⁵`



## 1. Алгоритм и блок-схема

### Алгоритм

1. Начало.
2. Ввести исходные данные: `x`, `y`, `z`.
3. Вычислить `f`
4. Вывести результат.
5. Конец.

### Блок-схема

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0%20%E2%84%9613%22%20id%3D%22task13%22%3E3Vhtj%2BI2EP41kaASKIkhgY%2FAsntq76qrVup9NokTUpw455gD9td3%2FBISJ9wdsNtq25XWGc%2BMx%2BN5xjMWDlrlxyeOy%2B0nFhPq%2BG58dNCD4%2Fse8l34SM5Jc4K5pxkpz2Kj1DCesxdimGZdus9iUlmKgjEqstJmRqwoSCQsHuacHWy1hFF71xKnpMd4jjDtc79ksdhq7mzqNvwPJEu39c6BayQ5rpWNiWqLY3bQLKWD1g5accaEpvLjilAZvDou2tDjd6RnxzgpxDULKoG56C%2BqvROn%2BsiwDKILk%2BVhmwnyXOJISg4AMPC2Iqcw84BMMkpXjDKu1iHixVMSAr8SnO1ISzIPQoQDuYIVwmDsnedmZ2lR%2B%2FIN073xxXlwnfmDHJeuAyqzsKZhXKpxbRYRLsixdSYThSfCciL4CVS2LaACA9OhAdWbGZ6x4odmblIXmSk2KZWeLTdRB8IE%2FjIIWVHurwIBsqWUJGhhSgllKcc5RKgkPINdCe%2FKPjeCG3GLMZkl0SXcgmhGNkkHt%2BlFnPyAwlmWGw5UKqmj469U7NTn5S6QPNisixIKbZS8cGqh5L0FTGwv%2Fhc4%2Ffx%2BGdyqEhfWwYKve1mYlIXRwWCyAJWC8RxTZavWqSFPamsQXm1Q8%2BGLc3m2YlOVjRe35ULYv7DIn9oX1rUv7ARNX58KpIj%2Fk0VzYYqjHHUBnaoCGvxz5dIf21dxGr7BVSQm1iTuNeo%2BHmzPo%2FpiNu2uDRNYqWPHuNiylBWYrhvukrN9ERO5uQuzRucjY6UJ%2BF9EiJNBBO8FswGGhFnIhwdMN5RFO816zCi18AL3UiI6XaEPAicUi%2BybffRXxdO%2FL56tzvUO4%2FmKwJmln1kGpz9nMwrsWuLPO7ms8TOrOuE%2Fu3EdIvP7EGk3qXcIiZ3ipoz%2BCwn%2B6xNLPv7%2BIftaffkt3FUvf%2F7Bn0Y%2FiGgTOTsuN9RxKgvlKMZ8N4DC7S0X3tpX7x7kI4Qm86Gp2q3qnqi%2FS3XfdYP14vGuZh1pK7JNt1zi6WbgT7RDbpsYakrL3ZrdEMPhxTZfuyFP1LR%2B5Ufd%2Fdui654YCc4zetK%2Bn98LRmGFqwjHGQbRJ1awrljt4SorlcpYaWNe6r3dDY52qUJ21AqP4Lio6my4cMZByQ6Dk%2FJFGpEzeNC6I%2Fj3xiZC3ljJH2FEY3fYY07GMoL1bJDgTXU2cpKCXyRbmq6yYvBiDPjKlNlXYCmQVr73sLrMvqPDz%2FsdPgjDceeF5Y19u8f36uKbXVl0Q1V8f9XvtQ0JdsCnlkIpG031o37lW7igGWojcKs%2BENqDa1d3skD3qV53%2FKmhCUJv1GZh2vy2otWbX6jQ%2Bm8%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
## 2. Реализация программы
Программа написана на языке **C++**.

```cpp
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
	f = (pow(y + pow(x - 1.0, 1. / 3.0), 1. / 4.0)) / (fabs(x - y) * (pow(sin(z), 2.0) + tan(z)));
	//Ответ
	printf("Ответ:%.5lf", f);

	return 0;

}
```
## 3. Результаты работы программы
```text
Введите x:17.421
Введите y:10.365e-3
Введите z:0.828e5
Ответ:0.33056
```
## 4. Информация о разработчике
```text
Имя: Коноваленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
