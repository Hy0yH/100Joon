#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A = 0, B = 0, C = 0, mid = 0;
	scanf("%d %d %d", &A, &B, &C);
	if ((A >= B && A <= C) || (A >= C && A <= B))
		printf("%d", A);
	else if ((B <= A && B >= C) || (B >= A && B <= C))
		printf("%d", B);
	else if ((C >= A && C <= B) || (C <= A && C >= B))
		printf("%d", C);
	return 0;
}

