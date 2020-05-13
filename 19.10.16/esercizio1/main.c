double square_dist(double x1, double y1, double x2, double y2)
{
	return x1 * x1 + x2 * x2 - 2 * x1*x2 + y1 * y1 + y2 * y2 - 2 * y1*y2;
}

int main(void)
{
	int px1, px2, py2, py1;
	double d;
	px1 = 2;
	px2 = 5;
	py1 = 4;
	py2 = 3;
	d = square_dist(px1,py1,px2,py2);
	return 0;
}