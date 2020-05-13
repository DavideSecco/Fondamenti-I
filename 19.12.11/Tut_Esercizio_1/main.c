double altezza_caduta(double g, double t)
{
	double altezza;
	altezza = 0.5*g*t*t;
	return altezza;
}

int main()
{
	double g = 9.81;
	double t = 1;
	double h=altezza_caduta(g,t);
	return 0;
}