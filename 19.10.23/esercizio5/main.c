double discriminante(double a, double b, double c)
{
	int d;
	d = b * b - 4 * a*c;
	return d;
}

main()
{
	int a = 2, b = 3, c = 9;
	int d;
	d = discriminante(a, b, c);
	return 0;
}