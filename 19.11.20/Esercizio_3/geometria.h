#if !defined PUNTI_H
#define PUNTI_H

struct punto
{
	double x, y;
};

#endif

#if !defined GEOMETRIA_H
#define GEOMETRIA_H

extern int colineari(struct punto p1, struct punto p2, struct punto p3);

#endif
