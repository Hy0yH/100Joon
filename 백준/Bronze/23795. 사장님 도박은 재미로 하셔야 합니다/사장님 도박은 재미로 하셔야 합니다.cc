#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int money[2000] = { 0 };
	int total = 0;
	for (int i = 0; ; i++)
	{
		scanf("%d", &money[i]);
		if (money[i] == -1)
			break;
		total += money[i];
	}
	printf("%d", total);

	return 0;
}
