#include <stdio.h>
#include <stdlib.h>

void Error(char *s)
{
	printf(s);
	return;
}

int main()
{
	int *p;
	p = malloc(sizeof(int));
	p = NULL;

	if(p == NULL)
	{       
		printf("if...\n");
		Error("Cound not allocate the memory\n");
		Error("Quitting...\n");
		exit(1);
	}
	else
	{
		printf("else...\n");
		/* some stuff to user p*/
	}

	return 0;
}
