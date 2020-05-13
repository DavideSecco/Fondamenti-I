#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>

extern size_t contanumeri(const char* nomefile);

int main()
{
	const char f[] = "file1.txt";
	size_t dim = contanumeri(f);
	return 0;
}