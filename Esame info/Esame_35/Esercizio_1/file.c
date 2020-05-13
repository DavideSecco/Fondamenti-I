#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>
extern bool is_terna_pitagorica(unsigned int v[3])
{
	unsigned int max = v[0];
	unsigned int min = v[0];
	int i = 1;
	while (i < 3)
	{
		if (v[i] > max)
			max = v[i];
		if (v[i] < min)
			min = v[i];
		i++;
	}
	i = 0;
	double ris =sqrt( max * max - min * min);
	while (i < 3) {
		if (ris == v[i])
			return true;
		i++;
	}
	
	return false;
}



