#include <stdio.h>

int main()
{
	int i=3;
	
	switch(i)
	{
		default:
			i=2;
		case 1:
			printf("a=1\n");
			break;
		case 2:
			printf("a=2\n");
			break;
	}

	return 0;

}



