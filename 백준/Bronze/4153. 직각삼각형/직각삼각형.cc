#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int a = 0, b = 0, c = 0;
	while (1)
	{
		scanf("%d %d %d", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		if (a > b && a > c)
		{
			if (b * b + c * c == a * a)
				printf("right");
			else
				printf("wrong");
		}
		if (b > a && b > c)
		{
			if (a * a + c * c == b * b)
				printf("right");
			else
				printf("wrong");
		}
		if (c > a && c > b)
		{
			if (a * a + b * b == c * c)
				printf("right");
			else
				printf("wrong");
		}

		printf("\n");
	}

	return 0;
}