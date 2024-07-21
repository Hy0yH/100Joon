#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int N = 0;
	char S[120] = { 0 };

	scanf("%d", &N);
	scanf(" %s", S);

	if (S[N - 1] == 'G')
		S[N - 1] = 0;
	else
		S[N] = 'G';

	printf("%s", S);
	return 0;
}

