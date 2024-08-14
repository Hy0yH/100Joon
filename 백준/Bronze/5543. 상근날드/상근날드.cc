#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int menu[5] = { 0 };
	int b = 2000, d = 2000;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &menu[i]);
		if (i < 3)
		{
			if (menu[i] < b)
				b = menu[i];
		}
		if (i >= 3)
		{
			if (menu[i] < d)
				d = menu[i];
		}
	}
	printf("%d", b + d - 50);

	return 0;
}
