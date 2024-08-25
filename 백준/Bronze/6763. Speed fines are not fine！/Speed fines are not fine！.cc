#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int Limit = 0, km = 0, rader = 0;
	scanf("%d", &Limit);
	scanf("%d", &km);
	rader = km - Limit;
	if (rader >= 1 && rader <= 20)
		printf("You are speeding and your fine is $100.");
	else if (rader >= 21 && rader <= 30)
		printf("You are speeding and your fine is $270.");
	else if (rader >= 31)
		printf("You are speeding and your fine is $500.");
	else
		printf("Congratulations, you are within the speed limit!");
	return 0;
}