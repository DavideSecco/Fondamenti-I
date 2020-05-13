#include <stdbool.h>
#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int felice(unsigned int num)
{
	while (1)
	{
		if (num == 1)
			return 1;
		else if (num == 4 || num==0)
			return 0;

		int new_num = 0;
		while (num >= 1)
		{
			int cifra = num % 10;
			new_num = new_num + cifra * cifra;
			num = num / 10;
		}
		num = new_num;
	}
	return 0;
}