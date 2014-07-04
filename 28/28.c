#include <stdio.h>

int gcd(int u,int v)
{
	int t;
	while(v > 0)
	{
		if ( u > v)
		{
			t = u;
			u = v;
			v = t;
		}

		v = v - u;
	}
	return u;
}

int main()
{
	int x,y;
	printf("Enter x y to find their gcd:");
	while(scanf("%d%d",&x,&y) != EOF)
	{
		if ( x > 0 && y > 0)
			printf("%d %d %d\n",x,y,gcd(x,y));
		printf("Enter x y to find their gcd:");
	}
	printf("\n");

	return 0;
}
