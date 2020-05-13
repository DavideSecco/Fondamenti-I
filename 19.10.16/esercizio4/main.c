char max_pot10( int val)
{
	int n, i;
	if (val == 0) {
		return -1;
	}
	i = 0;
	n = 10;
	while (val > n) {
		n = 10*n;
		i = i + 1;
	};
	return i;
}

int main()
{
	int val = 10000300, i;
	i = max_pot10(val);
	return 0;
}