#include <stdio.h>
#include "vector.c"

int main(void)
{	
	vector	a={2,4,6},
		b={6,4,2},
		result;
	result=sum(&a,&b);
	printf("Result of sum: (%d, %d, %d)\n",result.a,result.b,result.c);
	return 0;
}