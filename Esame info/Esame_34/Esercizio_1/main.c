#include <stdbool.h>

extern bool is_date(const char *s);

int main()
{
	char s[] = "12/02/2014";
	bool ris = is_date(s);
	return 0;
}