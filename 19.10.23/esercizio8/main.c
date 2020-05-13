double fatt (double x)
{
	double n = 1, fatt = 1;
	while (n <= x)
	{
		fatt = fatt * n;
		n++;
	}
	return fatt;
}

double pot(double base, double esp)
{
	double pot = 2;
	double i;
	for (i = 2; i <= esp;  i++)
	{
		pot = pot*base;
	}
	return pot;
}

double exp(double x)
{
	double somm = 1, n = 1;
	while (n < 100) {
		somm = somm + (pot(x, n) / fatt(n));
		n++;
	}
	return somm;
}

main()
{
	int x = 2;
	double n;
	n = exp(x);
	return 0;
}