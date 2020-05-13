#include "rational.h"

void rational_sum(struct rational *sum, const struct rational *first, const struct rational *second)
{
	sum->num = first->num*second->den+ second->num*first->den;
	sum->den = first->den*second->den;
	
	int i = 1;
	int max_divisore=1;
	while ( i <= sum->num && i <= sum->den)
	{
		if (sum->num%i == 0 && sum->den%i == 0)
			max_divisore = i;
		i++;
	}

	sum->num = sum->num / max_divisore;
	sum->den = sum->den/max_divisore;

	if (sum->num == 0)
		sum->den = 1;
}