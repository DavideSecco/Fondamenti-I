#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

extern void person_read(FILE *f, struct person* pp);

struct person {
	char name[256];
	unsigned int age;
};

int main(void)
{
	struct person p;
	FILE *f = fopen("person1.txt", "r");
	person_read(f, &p);
	fclose(f);
	return 0;
}