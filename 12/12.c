//puzzle 12
#include <stdio.h>

void duff(register char *to,register char *from,register int count)
{
	register int n = (count+7)/8;

	switch(count % 8)
	{
		case 0: do{ *to++ = *from++;		
		case 7:     *to++ = *from++;	    
		case 6:     *to++ = *from++;
		case 5:     *to++ = *from++;
		case 4:     *to++ = *from++;
		case 3:     *to++ = *from++;
		case 2:     *to++ = *from++;
		case 1:     *to++ = *from++;
			}while( --n > 0);
	}
}

int main()
{
	char to[20]={0};
	char from[20]={'a','b','c','d','e'};

	duff(to,from,8);

	printf("from = %s\n",from);
	printf("to   = %s \n",to);

	return 0;
}
