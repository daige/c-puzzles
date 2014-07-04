#include <stdio.h>

char array[5] = {'a','b','c'};

int main()
{
	size_t i;
	printf("%c\n",array[0]);
	for(i=0; i < strlen(array); i++)
		printf("%c\n",array[i]);

	return 0;
}
