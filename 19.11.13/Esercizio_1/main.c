#include <stdlib.h>
void potenza(double *d, size_t i) {
	double r = *d;
	if (i == 0)
		*d = 1;
	else
		for (size_t t = 1; t < i; t++)
			(*d) = (*d)*(r);

}

int main(void) {
	double a[] = { 2,2,2,2,2,2,2,2,2,2 };
	size_t i, n = 10;

	for (i = 0; i < n; ++i) {
		double d = a[i];
		potenza(&d, i);
		a[i] = d;
	}
	return 0;
}