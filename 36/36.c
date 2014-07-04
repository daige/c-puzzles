#include <stdio.h>
int main()
{
	int cnt = 5,a;
	
	do{
		printf("a=%d,cnt=%d\n",a,cnt);
		a /= cnt;

	}while( cnt--);

	printf("%d\n",a);

	return 0;
}

