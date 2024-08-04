#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() 
{
	int H = 0, W = 00;
	scanf("%d", &H);
	scanf("%d", &W);
	if (H >= W)
		printf("%d", W * 50);
	else if (W >= H)
		printf("%d", H * 50);
	return 0;
}
