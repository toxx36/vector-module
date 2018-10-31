#ifndef VECTOR_H
#define VECTOR_H

typedef struct 
{
	int a,b,c;
} vector;

vector sum(vector*,vector*);
vector sub(vector*,vector*);
vector cross(vector*,vector*);
int dot(vector*,vector*);
	
#endif