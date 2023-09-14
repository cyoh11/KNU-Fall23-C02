#include <stdio.h>

int main()
{
	int num;
	scanf_s("%d", &num);

	if (num > 0) {
		printf("양의 정수 (%d)\n", num);
		printf("!!!!\n");
	}
	else {
		printf("음의 정수이거나 0\n");
		printf("!!!!\n");
	}
	

	return 0;
}