#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

extern unsigned int count_teenagers(FILE *f);

int main(void)
{
	
	FILE *f = fopen("people2.txt", "r");
	unsigned int n = count_teenagers(f);
	fclose(f);
	return 0;
}