/** @file practice.cpp
*  @author ������ �.�., ��. 515, ������� 16
*  @date 21.06.20
*  @brief ��������
*
*  ���� ������ ����
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include "functionaly.h"
int main()
{
	setlocale(LC_CTYPE, "rus");
	int command;
	char name_file[MAX];
	printf("������� ��� ����� � ����� ������(����������� � ����� ����������):");
	scanf("%s", &name_file);
	ReadTXTFile(name_file);
	printf("����:\n1-�������� ������\n2-����� ������\n0-������� ���������\n");
	for (;;)
	{
		printf("\n������� �������:");
		scanf("%d", &command);
		if (command > 2 || command < 0) printf("����� ������� �� ����������!\n");
		else
		{
			switch (command)
			{
			case 1: view(); break;
			case 2: search();  break;
			case 0: return 0; break;
			}
		}
	}
}
