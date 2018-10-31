#include "vector.h"

vector cross(vector *a, vector *b)
{
	return (vector){a->b*b->c - a->c*b->b,
			a->c*b->a - a->a*b->c,
			a->a*b->b - a->b*b->a};
}