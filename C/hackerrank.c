#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int min(int number, ...)
{
	va_list list;
	int min=0;
	va_start(list, number);
	for(int i=0; i<number; i++)
	{
		int x=va_arg(list, int);
		if(i==0)
		min=x;
		else if(x<min)
		min=x;
	}

	va_end(list);

	return min;
}

void main()
{
	printf("Sum of 10 numbers is : %d", min(5, 45, 76, 9, 2, 76));
}