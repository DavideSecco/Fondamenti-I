double rad(int x)
{
	double b = 1;
	double a = 1;
	double t;
	while (b*b <= x)
	{
		b = b + 1;
	}
	a = b - 1;
	while (b*b - a * a > 0.01)
	{
		t = (b + a) / 2;
		if (t*t > x) {
			b = t;
		}
		else {
			a = t;
		}
	}
	return b;
}

int soluzioni(double a, double b, double c, double *x1, double *x2)
{
	double d, det;
	d = b * b - 4 * a*c;
	if (d == 0) {
		return 1;
	}
	else if (d < 0) {
		return 0;
	}
	else {
		det = rad(d);
		*x1= (-b + det)/(2*a);
		*x2= (-b - det)/(2*a);
	}
	return 2;
}



main()
{
	double  x1, x2;
	int n, a = 1, b = 0, c = -2;
	n = soluzioni(a, b, c, &x1, &x2);
	return 0;
}