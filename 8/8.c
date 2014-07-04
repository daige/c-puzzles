#include <stdio.h>

int CountBits(unsigned int x)
{
	static unsigned int mask[] =
       	{ 
		0x55555555,
		0x33333333,
		0x0F0F0F0F,
		0x00FF00FF,
		0x0000FFFF
	};

	int i;
	int shift;

	for( i=0,shift =1; i < 5; i++,shift *=2)
		x = (x &mask[i]) +((x >> shift) & mask[i]);

	return x;
}

int main()
{
	while(1)
	{
		int x;
		scanf("%d",&x);
		printf("%d    %d\n",x,CountBits(x));
	}

	return 0;
}
