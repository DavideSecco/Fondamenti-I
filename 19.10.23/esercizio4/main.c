int divisione(double a, double b, double *q)
{
	if (b != 0)
	{
		*q = a / b;
		return 1;
	}
	return 0;
}

main()
{
	double a = 5;
	double b = 2;
	double c;
	int n;
	n = divisione(a, b, &c);
	return 0;
}