#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	
	int arr[10] = { 0 };
	//int tmp[10] = { 0 };
	int a = 0;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] = arr[i] % 42;
	}

	for (int j = 0; j < 10; j++)
	{
		a = 0;
		for (int k = 0; k < j; k++)
			if (arr[j] == arr[k])
			{
				a = 1;
				break;
			}
		if (a)
			continue;
		count++;
	}
	printf("%d", count);

	return 0;
}
