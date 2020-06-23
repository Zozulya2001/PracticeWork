#include "functionaly.h"
#include <stdio.h>
#include <stdlib.h>
FILE* fp1;
/** �������� � ���������� ���������� � txt-�����.
  *
  * @param name[] � ��� �����, ������� ���� ������������.
  */
void ReadTXTFile(char name[])
{
	char sym;
	int i;
	if ((fp1 = fopen(name, "r+")) == NULL)
	{
		printf("���� � ����� ������� �� ������!\n");
		exit(1);
	}
	if (getc(fp1) == EOF)
	{
		printf("���� ������!\n");
		exit(1);
	}
	fseek(fp1, 0, SEEK_SET);
	while (!feof(fp1))
	{
		for (i = 0; i < MAX_PARTS; i++)
		{
			fscanf(fp1, "%d", &list[i].index);
			fscanf(fp1, "%s", &list[i].name);
			fscanf(fp1, "%s", &list[i].contry);
			fscanf(fp1, "%f", &list[i].depht);
			fscanf(fp1, "%f", &list[i].solinity);
			fscanf(fp1, "%c", &sym);
		}
	}
	fclose(fp1);
}
