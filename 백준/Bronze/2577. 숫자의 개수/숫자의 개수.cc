#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int A = 0, B = 0, C = 0, tol = 0;
	int arr[10000] = {0};
	int tmp = 0;
	scanf("%d %d %d", &A, &B, &C);
	tol = A * B * C;

	while (tol != 0)
	{
		tmp = tol % 10;
		tol = tol / 10;
		arr[tmp]++;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);

	return 0;
}
