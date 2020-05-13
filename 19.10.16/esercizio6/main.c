int primo (int val)
{
	int n=2;
	while (n < (val + 1) / 2)
	{
	if ((val%n) == 0)
		return 0;
	n = n + 1;
	}
	return 1;
}

int main() 
{
	int val = 12;
	int n;
	n = primo (val);
	return 0;
}
