#include <stdio.h>

#define PrintInt(expr)  printf("%s : %d\n",#expr,(expr))

int max(int x,int y)
{       int z;
	z=(x > y) ? x: y;
	return z;
}

int main()
{
	int a=10,b=20;
	PrintInt(a);
	PrintInt(b);
	PrintInt(max(a,b));
}


