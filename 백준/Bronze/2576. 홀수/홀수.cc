#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[7] = { 0 };
	int odd[7] = { 0 };
	int min = 0, total = 0, oddcount = 0;
	for (int i = 0; i < 7; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] % 2 != 0)
			odd[oddcount++] = arr[i];
	}

	if (oddcount == 0)
		printf("-1");
	else
	{
		min = odd[0];
		for (int i = 0; i < oddcount; i++)
		{
			total += odd[i];
			if (min > odd[i])
				min = odd[i];
		}
		printf("%d\n%d", total, min);
	}
	return 0;
}

