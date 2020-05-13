#if !defined COMPLESSO_H
#define COMPLESSO_H

struct complesso
{
	double re, im;
};

#endif

#if !defined PRODOTTO_COMPLESSO
#define PRODOTTO_COMPLESSO

void prodotto_complesso(struct complesso *comp1, const struct complesso *comp2);

#endif