#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	if (num > 0)
		printf("���� ���� (%d)\n", num);
	else if (num < 0)
		printf("���� ���� (%d)\n", num);
	else
		printf("0�Դϴ�.");

	return 0;
}