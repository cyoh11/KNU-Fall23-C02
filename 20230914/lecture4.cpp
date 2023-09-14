#include <stdio.h>

int main()
{
	int a, b, c, val1, val2, val3, val4, val5;
	a = 0, b = 5, c = 8;

	val1 = a && b;
	val2 = a || c;
	val3 = (a > b) && (a < c);
	val4 = !val3;
	val5 = b && c;

	printf("%d %d %d %d %d\n", val1, val2, val3, val4, val5);

		return 0;
}