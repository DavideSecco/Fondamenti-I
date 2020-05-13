#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

struct person {
	char name[256];
	unsigned int age;
};

void person_read(FILE *f, struct person* pp)
{
	fscanf(f,"%s", pp->name);
	fscanf(f,"%u", &pp->age);
}