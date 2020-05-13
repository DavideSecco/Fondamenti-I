extern char *trim(char *s);

int main()
{
	char s[] = "  bella come va  ";
	char *punt;
	punt = trim(s);
	return 0;
}