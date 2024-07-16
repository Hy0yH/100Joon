#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int M = 0, D = 0;
	scanf("%d", &M);
	scanf("%d", &D);
	 if (M == 2)
	{
		if (D == 18)
			 printf("Special");
		else if (D < 18)
			printf("Before");
		else
			printf("After");
	}
	else if (M < 2)
		printf("Before");
	else if (M > 2)
		printf("After");

	return 0;
}
