#include <stdbool.h>


bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {
	if (a*a == c*c + b*b || b*b == a*a + c*c || c*c == a*a + b*b)
		return true;
	return false;
}