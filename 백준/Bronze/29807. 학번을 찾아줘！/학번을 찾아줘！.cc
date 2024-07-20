#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T = 0, num1 = 0, num2 = 0, num3 = 0;
	int arr[5] = { 0 };
	scanf("%d", &T);
	for (int i = 0; i < T; i++)
	{
		scanf("%d", &arr[i]);
	}

	if (arr[0] > arr[2])
		num1 = (arr[0] - arr[2]) * 508;
	else
		num1 = (arr[2] - arr[0]) * 108;

	if (arr[1] > arr[3])
		num2 = (arr[1] - arr[3]) * 212;
	else
		num2 = (arr[3] - arr[1]) * 305;

	if (arr[4] != 0)
		num3 = arr[4] * 707;

	printf("%d", (num1 + num2 + num3) * 4763);

	return 0;
}
