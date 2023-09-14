#include <stdio.h>

int main()
{
	int jumsu;
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("잘못 입력했습니다.\n");
		return 0;
	}
	
	int jumsu_div = jumsu / 10;

	switch (jumsu_div) {
	case 10:
	case 9:
		printf("A\n");
		break;
	case 8:
		printf("B\n");
		break;
	case 7:
		printf("C\n");
		break;
	case 6:
		printf("D\n");
		break;
	default:
		printf("F\n");
		break;
	}

	return 0;
}