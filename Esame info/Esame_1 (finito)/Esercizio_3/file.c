#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

struct person {
	char name[256];
	unsigned int age;
};

unsigned int count_teenagers(FILE *f)
{
	int n;
	unsigned int num_pers = 0;
	char s[20];
	int età;
	fscanf(f, "%d", &n);
	for (int i = 0; i < n; i++)
	{
		fscanf(f, "%s", s);
		fscanf(f, "%d", &età);
		if (età <= 19 && età >= 13)
			num_pers++;
	}
	return num_pers;
}