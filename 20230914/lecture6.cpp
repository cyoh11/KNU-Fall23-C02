#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	if (num > 0) {
		printf("���� ���� (%d)\n", num);
		printf("!!!!\n");
	}
	else {
		printf("���� �����̰ų� 0\n");
		printf("!!!!\n");
	}
	

	return 0;
}