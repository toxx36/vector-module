#include "vector.h"

int dot(vector *a, vector *b)
{
	return a->a*b->a+a->b*b->b+a->c*b->c;
}