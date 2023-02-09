#include <stdio.h>

int main()
{
/*program to realise values of pointer and integer data type data*/
	int x=2;
	int y=9049;
	int *p=&x;
	printf("\n\t value of x %d\n\t value of y %d\n\t memory location of x %d\n\t memory location of y %d\n\t value of pointer %d\n\t star y value %d",x,y,&x,&y,*p,&y);
	
return 0;
}
