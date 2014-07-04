#include <stdio.h>
extern int arr[];

int main()
{
	arr[1]=100;

	printf("%d\n",arr[1]);
	return 0;
}

