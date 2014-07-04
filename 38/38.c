#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int main()
{
	int *a,i;

	a= malloc(SIZE *sizeof(int));

	for(i=0; i<SIZE;i++)
		*(a+i) = i*i;
	for(i=0; i<SIZE;i++)
		printf("%d\n",*a++);
	free(a);

	return 0;
}
