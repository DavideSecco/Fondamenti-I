#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

extern bool is_terna_pitagorica(unsigned int v[3]);

int main()
{
	unsigned int v[] = { 1,2,3 };
	bool ris = is_terna_pitagorica(v);
	return 0;
}