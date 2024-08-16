#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int N = 0, total = 0, cal = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &cal);
		total += cal;
	}
	printf("%d", total);
	

	return 0;
}
