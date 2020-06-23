#include "functionaly.h"
#include <stdio.h>
/** Ищет номер записи в базе данных.
  *
  * @param number – номер записи.
  * @return i – возвращает итерацию цыкла, в котором был найден номер записи.
  */
int find_part(int number)
{
	int i;
	for (i = 0; i < MAX_PARTS; i++)
	{
		if (list[i].index == number) return i;
	}
	return -1;

}
/** Просмотр записи.
  *
  */
void view()
{
	int i, number;
	printf("Введите номер записи:");
	scanf("%d", &number);
	i = find_part(number);
	if (i == -1) printf("Запись с таким идентификационным номером не найдена!\n");
	else information(i);

}
/** Поиск и просмотр записей, глубина которых меньше 50 метров и соленость больше 20 процентов.
  *
  */
void search()
{
	int count = 0, i;
	for (i = 0; i < MAX_PARTS; i++)
	{
		if (list[i].depht < 50 && list[i].solinity>20)
		{
			information(i);
			count++;
		}
	}
	if (count == 0) printf("Запись с таким критерием поиска не найдена!\n");
}
/** Вывод информации об озере.
  *
  * @param i – индекс товара, информацию про каторый необоходимо вывести.
  */
void information(int i)
{
	printf("Идентификационный номер: %d\n", list[i].index);
	printf("Название озера %s\n", list[i].name);
	printf("Старана разположения озера: %s\n", list[i].contry);
	printf("Глубина озера: %0.2f метров\n", list[i].depht);
	printf("Соленость озера: %.2f процентов\n", list[i].solinity);
}
