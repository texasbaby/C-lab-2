#include <time.h>




char * password(char * line)
{
	int i, j,buf;
	long long int t;
	for (i = 0; i < 3; i++) //������� �����
	{
		t = rand();
		j = 48 + t % 10;
		line[i] = char(j);
	}
	for (i = 3; i < 6; i++) //������� �����
	{
		t = rand();
		j = 65 + t % 26;
		line[i] = char(j);
	}
	for (i = 6; i < 8; i++) //������� ����� ������� �������
	{
		t = rand();
		j = 97 + t % 26;
		line[i] = char(j);
	}
	for (i = 0; i < 10; i++) //����������
	{
		t = rand() % 8;
		buf = line[t];
		line[t] = line[7 - t];
		line[7 - t] = buf;
	}
	line[8] = '\0';
	return line;
}