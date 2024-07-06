#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	
	int arr[8];
	int count;
	for (int i = 0; i < 8; i++)
		scanf("%d", &arr[i]);

	if (arr[0] > arr[7])
		count = 0;
	else
		count = 1;

	for (int j = 0; j < 7; j++)
	{
		int k = j + 1;
		int a = abs(arr[j] - arr[k]);
		if (k > 7)
			break;
		if (a != 1)
		{
			printf("mixed");
			count = -1;
			break;
		}
	}
	if (count == 0)
		printf("descending");
	else if (count == 1)
		printf("ascending");

	return 0;
}
