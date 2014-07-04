#include <stdio.h>

enum DAY{ Mon=1,Tue,Wed,Thu,Fri,Sat,Sun };

int main()
{
	enum DAY today,yesterday,tomorrow;

	yesterday = Mon ;
	today = (enum DAY) (yesterday +1);
	tomorrow = 3.0f; // or tomorrow = 3;
	printf("%d %d %d\n",yesterday,today,tomorrow);

	return 0;
}

