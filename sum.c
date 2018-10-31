#include "vector.h"

vector sum(vector *a, vector *b)
{
	return (vector){a->a+b->a,
			a->b+b->b,
			a->c+b->c};
}