#include "pch.h"
int fattoriale(int val)
{
	int n = 1, i = 1;
	while (val >= i) {
		i = i + 1;
		n = n * (n + 1);
	}
	return n;
}int main(){
	int val = 5, fatt;	fatt=fattoriale(val);	return 0;}