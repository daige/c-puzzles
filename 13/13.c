//puzzle 13
#include <stdio.h>

int CountBits( unsigned int x)
{
	int count = 0;

	while(x)
	{
		count++;
		x=x&(x-1);
	}

	return count;
}

int main()
{
	int x;
	while(1)
	{
		scanf("%d",&x);
		printf("ContBits of %d is %d \n",x,CountBits(x));
	}

	return 0;

}
