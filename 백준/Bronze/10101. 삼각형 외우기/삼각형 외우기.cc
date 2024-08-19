#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a = 0, b = 0, c = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a + b + c == 180)
	{
		if (a == 60 && b == 60 && c == 60)
			printf("Equilateral");
		else if (a == b || a == c || b == c)
			printf("Isosceles");
		else if (a != b && a != c && b != c)
			printf("Scalene");
	}
	else if (a + b + c != 180)
		printf("Error");

	return 0;
}
