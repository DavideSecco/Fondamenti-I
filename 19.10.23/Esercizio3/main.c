int somma_cifre(int x)
{
	int n = 1;
	int k = 1;
	int somma = 0;
	int a = 0;
	while (n < x)
	{
		n = n * 10;
	}
	n = n / 10;
	while (n>=1)
	{
		if (x < k*n)
		{
			somma = somma + (k - 1);
			x = x - (k - 1)*n;
			k = 0;
			n = n / 10;
		}
		k = k + 1;
	}
	return somma;
}

main()
{
	int val = 909;
	int n;
	n=somma_cifre(val);
	return n;
}