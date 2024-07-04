#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int T = 0, H = 0, W = 0, N = 0, A = 0, B = 0;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int Hotel[99][99] = { 0 };
		A = 0;
		scanf("%d %d %d", &H, &W, &N);
		for (int j = 0; j < H; j++)
		{
			for (int k = 0; k < W; k++)
			{
				Hotel[j][k] = (j + 1) * 100 + k + 1;
			}
		}

		if (N % H == 0)
		{
			A = H * 100 + N / H;

		}
		else
			A = (N % H) * 100 + (N / H + 1);
		printf("%d\n", A);
	}
	return 0;
}