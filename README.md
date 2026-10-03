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

[Ссылка на блок-схему](https://viewer.diagrams.net/?tags=%7B%7D&lightbox=1&highlight=0000ff&edit=_blank&layers=1&nav=1&title=task13_flowchart(1).drawio&dark=auto#R%3Cmxfile%3E%3Cdiagram%20name%3D%22%D0%97%D0%B0%D0%B4%D0%B0%D1%87%D0%B0%20%E2%84%9613%22%20id%3D%22task13%22%3E3VhLc9owEP41nkkO6dgWtuEIhJBp0046mWnOwha2i7AcWQTIr%2B%2FKkrGFKeHVTtoc5NVqdyXttw8RCw3nqzHHefKVRYRarh2tLHRrua6DXBs%2BkrNWHL%2FnKEbM00gL1Yyn9I1optaLF2lECkNQMEZFmpvMkGUZCYXBw5yzpSk2ZdTcNccxaTGeQkzb3Oc0Eonidj275t%2BTNE6qnX1br8xxJaxNFAmO2FKxShk0stCQMyYUNV8NCZXOq%2FyiDN39ZnVzME4ycYhCITAXbaXqdGJdXRnUwLswGSyTVJCnHIdyZQkAAy8RcwozB8hpSumQUcZLPUScyCMB8AvB2Yw0Vnp%2BgLAvNVgmNMbOZq53lhbVWV4xXeizWLe21buV48C2QKQbVDSMg3IcaSXCBVk17qS9MCZsTgRfg0jSAMrXMC1rUJ2u5mkrbqDnOnSRnmIdUvHGcu11ILTjd4OQZvniIBAgWnJJghSmlFAWczwHD%2BWEp7Ar4dtrj%2FXCkbhFmHSn4S7c%2FLBLJtMt3LydOLk%2BhbsMJhyoWFIryx2Wvis%2FbyeB5MBm2yihwETJCTwDJecSMLGF%2BC9wej%2B%2FNG5FjjPjYv7LQham0sLNUmPSB5GM8Tmmpa1KpoJ8WlkD9yqDig9fPJd3yyZFXp%2FiuFgI2gmLXM9MWNtM2A7yzg8FkkX%2FZNHs6%2BIoR1VAvbKA%2Bn%2BuXLqfzFT0ggukItG%2BJlGrUbfxYAseVolZt7smTGCl8h3jImExyzAd1dwBZ4ssInJzG2a1zANjuXb4TyLEWiOCF4KZAEPA9OXDA6YTysKZYt2llBp4wfFiIra6QhsETigW6at59bP86Z7mz0bn%2BoD%2BPMNxWvWRpXD7TTQj36wlbm8rlhV%2BWmvL%2FZtjHIZI7zREmk3qA0Jihrguo38hwD%2BP2fTh2336Ujx%2FCWbF24%2FvfHyzx6O150y%2FHFHHqSyUNxHmsyso3M6g74zc8t2DXIRQp3etq3ajuk%2FLv11137b9Uf9uX7OWpnY261BZkW26cSQeT65cz1MPsSZxrahyveNqdoO4vt5q8%2FYUh%2BaO94S%2BEpGGeP9rQJ24eg2c0H96xz%2FXWxl7sWBCR%2BTrx8vLc0sl7IDXDYFclsBiXyV1DVxQFzUROFYeCHWCQ7W3okBV0FbdftdQB6ELNQCY1r%2F6lXj9vxM0%2BgU%3D%3C%2Fdiagram%3E%3C%2Fmxfile%3E)
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
Имя: Коноавленко Ярослав
Вариант: 13
Группа: бИЦТ-261
Подгруппа: 1
