#include "task4.h"
#include <stdio.h>
#define BUFF	512


char* process(char* line)
{
	int flag = 0;
	//��������� ����� �������� ������
	for (int i = 0; i <= (BUFF - 1); i++)
	{
		if ((line[i] >= (char)(48) && line[i] <= (char)(57)))  // ��������� ������� ������ ����� ��� ���
		{
			//���� ������� ������ �����, �� ��������� ��������� ������� ������ ����� ��� ����� ������
			for (int j = BUFF - 2; j > 0; j--)
			{
				
				if ((line[j] >= (char)(48) && line[j] <= (char)(57)) || (line[j] == '\0'))
				{// ���� ������� ������ ����� �� ������ �� ������
				}
				//���� �� ����� �� ������ ������
				else
				{
					//j = BUFF - 2 - flag;
					char b = line[i];
					line[i] = line[j];
					line[j] = b;
					flag++; // ���������� ����� ����� ��� ������� ������
					j = -1; //���� ������� ������ �� ������� �� �����
				}
				if ( i == j)
				{
					j = 0;
					i = BUFF;
					flag = 0;
				}
			}

		}
	}
	return line;
}