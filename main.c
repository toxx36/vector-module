#include <stdio.h>
#include "vector.h"

int main(void)
{	
	vector	a={2,4,6},
		b={6,4,2},
		result;
	result=sum(&a,&b);
	printf("Result of sum: (%d, %d, %d)\n",result.a,result.b,result.c);
	result=sub(&a,&b);
	printf("Result of sub: (%d, %d, %d)\n",result.a,result.b,result.c);
	result=cross(&a,&b);
	printf("Result of cross: (%d, %d, %d)\n",result.a,result.b,result.c);
	printf("Result of dot: %d\n",dot(&a,&b));
	return 0;
}