#include <math.h>

double volume_cono(double r, double h)
{
	if (r < 0 || h < 0)
		return 0;
	double volume = (3.14*r*r*h) / 3;
	return volume;
}

int main()
{
	double h = 23;
	double r = 12;
	double volume;
	volume = volume_cono(r, h);
	return 0;
}