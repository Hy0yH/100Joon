#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int R1 = 0, R2 = 0, S = 0;
	scanf("%d %d", &R1, &S);
	R2 = 2 * S - R1;
	printf("%d", R2);
	return 0;
}
