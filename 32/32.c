#include <stdio.h>

#define PrintInt(expr) printf("%s: %d",#expr,(expr))

int FiveIimes(int a)
{
	int t;
	t = a << 2 + a;
	return t;
}

int main()
{
	int a=1,b=2,c=3;

	PrintInt(FiveIimes(a));
	PrintInt(FiveIimes(b));
	PrintInt(FiveIimes(c));

	return 0;
}


