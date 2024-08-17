#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int H = 0, I = 0, A = 0, R = 0, C = 0;
	scanf("%d %d %d %d %d", &H, &I, &A, &R, &C);
	printf("%d", H * I - A * R * C);
	

	return 0;
}
