#include <stdio.h>

enum {false,true};

int main()
{
	int i = 1;
	printf("false=%d\n",false);
	printf("true=%d\n",true);
	do
	{
		printf("%d\n",i);
		i++;
		if( i < 15 )
			continue;
	}while(false);

	return 0;
}


