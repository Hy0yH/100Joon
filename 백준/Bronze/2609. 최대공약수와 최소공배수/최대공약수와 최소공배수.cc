#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, temp = 0;
	int i = 1, j = 1;
	scanf("%d %d", &a, &b);

	for (i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
			temp = i;
	}
	printf("%d\n", temp);

	i = 1;
	j = 1;

	while (1)
	{

		if (a * i > b * j)
			j++;
		if (a * i < b * j)
			i++;
		if (a * i == b * j)
		{
			printf("%d", a * i);
			break;
		}
	}
	return 0;
}
