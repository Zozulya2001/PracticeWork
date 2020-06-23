#include "functionaly.h"
#include <stdio.h>
/** ���� ����� ������ � ���� ������.
  *
  * @param number � ����� ������.
  * @return i � ���������� �������� �����, � ������� ��� ������ ����� ������.
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
/** �������� ������.
  *
  */
void view()
{
	int i, number;
	printf("������� ����� ������:");
	scanf("%d", &number);
	i = find_part(number);
	if (i == -1) printf("������ � ����� ����������������� ������� �� �������!\n");
	else information(i);

}
/** ����� � �������� �������, ������� ������� ������ 50 ������ � ��������� ������ 20 ���������.
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
	if (count == 0) printf("������ � ����� ��������� ������ �� �������!\n");
}
/** ����� ���������� �� �����.
  *
  * @param i � ������ ������, ���������� ��� ������� ����������� �������.
  */
void information(int i)
{
	printf("����������������� �����: %d\n", list[i].index);
	printf("�������� ����� %s\n", list[i].name);
	printf("������� ������������ �����: %s\n", list[i].contry);
	printf("������� �����: %0.2f ������\n", list[i].depht);
	printf("��������� �����: %.2f ���������\n", list[i].solinity);
}
