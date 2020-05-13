int conta_occorenze(char *s, char c) {
	int i = 0, r = 0;
	while (s[i] != 0) {
		if (s[i] == c)
			r++;
		i++;
	}
	
	return r;
}

int main(void)
{
	char t[] = "la marty è molto simpatica";
	char c = 'a';
	int g = conta_occorenze(t, c);
	return 0;
}