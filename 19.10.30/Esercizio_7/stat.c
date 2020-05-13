double media(double *x, unsigned int n)
{
	double media = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		media = media + x[i];
	}
	return media / n;
}

double varianza(double *x, unsigned int n, double med)
{
	double var = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		var = (x[i] - med)*(x[i] - med) / n + var;
	}
	return var;
}
