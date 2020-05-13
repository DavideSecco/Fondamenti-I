int fattoriale(int val)
{
	int n = 1;
	int i = 1;
	while (val >= i) {
		i = i + 1;
		n = n * (i);
	}
	return n;
}int main(void){
	int val = 10, fatt;	fatt = fattoriale(val);	return 0;}


