#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdint.h>
#include <string.h>

extern bool is_date(const char *s)
{
	if (s == NULL)
		return false;

	size_t len = strlen(s);

	if (s[2] == '/') 
	{
		if (s[5] == '/' && len == 10) 
		{
			if(isdigit(s[1]))
				return true;
		}
	}
	return false;
}