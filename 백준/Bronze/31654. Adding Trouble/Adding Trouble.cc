#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, C = 0;
	scanf("%d %d %d", &A, &B, &C);
	if (A + B == C)
		printf("correct!");
	else
		printf("wrong!");

	return 0;
}

