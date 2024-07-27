#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, C = 0;
	scanf("%d %d %d", &A, &B, &C);
	
	if (A == B && A == C && B == C)
		printf("%d", 10000 + A * 1000);
	else if (A == B)
		printf("%d", 1000 + A * 100);
	else if (A == C)
		printf("%d", 1000 + A * 100);
	else if (C == B)
		printf("%d", 1000 + B * 100);
	else if (A != B && A != C && B != C)
	{
		if (A > B && A > C)
			printf("%d", A * 100);
		else if (B > A && B > C)
			printf("%d", B * 100);
		else if (C > A && C > B)
			printf("%d", C * 100);
	}

	return 0;
}

