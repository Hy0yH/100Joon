#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	int a = 0, b = 0, c = 0, d = 0, time = 0, m = 0, s = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	time = a + b + c + d;
	m = time / 60;
	s = time % 60;
	printf("%d\n%d", m, s);

	return 0;
}
