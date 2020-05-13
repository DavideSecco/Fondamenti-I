#include <stdbool.h>

extern bool cifre_duplicate(unsigned long long n);

int main(void)
{
	unsigned long long n = 112;
	bool ris = cifre_duplicate(n);
	return 0;
}