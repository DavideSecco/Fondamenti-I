#include <math.h>

double radice(double n)
{
	double err = 1;
	double a, b=1;
	double c = -1;
	while (b*b < n) {
		b = b + 1;
	}
	a = b - 1;
	while (err > 0.0001)
	{
		c = (a + b) / 2;
		if (c*c == n)
			break;
		if (c*c < n) {
			a = c;
		}
		else {
			b = c;
		}
		err = fabs(c*c - n);
	}
	return c;
}

double distanza(double ax, double ay, double bx, double by)
{
	double dist;
	double quad_dist = (ax - bx)*(ax - bx) + (ay - by)*(ay - by);
	dist = radice(quad_dist);
	return dist;
}

int main()
{
	double ax = 0, ay = 0;
	double bx = 0.5, by = 0.5;
	double dist;
	dist = distanza(ax, ay, bx, by);
	return 0;
}