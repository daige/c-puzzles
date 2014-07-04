#include <stdio.h>
#include <stdlib.h>

#define MAX 80
#define NUMBER '0'

int  getop(char[]);
void push(double);
double pop(void);

int main()
{
	int type;
	char s[MAX];

	while((type = getop(s)) != EOF)
	{
		switch(type)
		{
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				push(pop() - pop());
				break;
			case '/':
				push(pop() / pop());
				break;
				/****
				 *
				 ****/
		}
	}
}
