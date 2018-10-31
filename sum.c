#include "vector.h"

vector sum(vector *a, vector *b)
{
	vector out;
	out.a = a->a+b->a;
	out.b = a->b+b->b;
	out.c = a->c+b->c;
	return out;
}