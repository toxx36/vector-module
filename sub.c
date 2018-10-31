#include "vector.h"

vector sub(vector *a, vector *b)
{
	return (vector){a->a-b->a,
			a->b-b->b,
			a->c-b->c};
}