int prossimo_numero_primo(int x)
{
	while (1)
	{
		x = x + 1;
		int n = 2;
		int f = 0;
		while (n < x)
		{
			if ((x%n) == 0) {
				f = 1;
			}
			n = n + 1;
			if (n > (x + 1) / 2  && f==0)
				return x;
		}
	}
}

int main()
{
	int x = 39;
	int n;
	n=prossimo_numero_primo(x);
	return 0;
}