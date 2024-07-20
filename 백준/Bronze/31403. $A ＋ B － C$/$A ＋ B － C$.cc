#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, C = 0, tmp = 0, tmp2;
	int A_B = 0;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", A + B - C);

	tmp = A;
	tmp2 = B;

	while (tmp2 > 0)
	{
		tmp = tmp * 10;
		tmp2 = tmp2 / 10;
	}
	printf("%d", tmp + B - C);

	return 0;
}
