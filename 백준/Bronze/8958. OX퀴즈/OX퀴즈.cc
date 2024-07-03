#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char arr[80];

int main(void)
{
	int N = 0, count = 0, tmp = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 80; j++)
			arr[j] = NULL;
		count = 0;
		scanf("%s", arr);
		for (int k = 0; k < sizeof(arr); k++)
		{
			if (arr[k] == 'O')
				tmp++;
			else
				tmp = 0;
			count = count + tmp;
		}
		printf("%d\n", count);
	}
	return 0;
}
