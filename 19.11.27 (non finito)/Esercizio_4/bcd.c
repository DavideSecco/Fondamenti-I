#include <stdlib.h>

unsigned short bin2bcd(unsigned short val) {

	if (val == 0)
		return 0x0000;
	if (val > 9999)
		return -1;

	unsigned short res = 0,
		c = -1;

	for (int i = 0; i < 4 ; i++) {

		c = val % 10;
		c = c << (i * 4);
		res = res + c;

		/*
		shifto il numero in base alla posizione che voglio, semplicemente
		aggiungo tanti 0 (a destra) quanti me ne servono per non modificare
		il numero che ho sommato precedentemente
			viene usato 2 come coefficiente di shift dell'indice, perché, dato che verrà passato un numero che deve stare in 16 bit,
			lo shifting dovrà essere fatto di 4 bit in 4 bit, pertanto dovrò specificare di quanti posti dovrò spostare la cifra
			all'interno dei 16 bit
		> shiftare significa spostare il bit in questione di tanti posti quanti specificati a destra dell'operatore <
		N.B shiftare di un posto equivale a moltiplicare *2 il numero
		questo ci è utile, perché se si shifta di due posti vorrà dire che moltiplicheremo per 4,
		quindi il nostro indice i ci saprà dire a quale posto va messa la cifra all'interno dei quartetti di bit
		infatti
		i = 0 << 2 = 0 (0 * 4 = 0)
		i = 1 << 2 = 4 (1 * 4 = 4, quindi 4 posti)
		i = 2 << 2 = 8 (2 * 4 = 8)
		i = 3 << 2 = 12 (3 * 4 = 12)

		esempio: 127
		al primo ciclo
		c = 7;
		i = 0;
		0 << 2 = 0;
		res += 7 << 0; (0000 0000 0000 0111);
	aggiungo 7 shiftato di 0 posti:

	 0000 0000 0000 0000 +
					0111
	--------------------
	0000 0000 0000 0111
		secondo ciclo
		c = 2
		i = 1; (0001)
		1 << 2 = 4; (0100);
	res += 2 << 4; (0010 << 0100) = (0000 0000 0010 0111)

	aggiungo 2 shiftato di 4 posti

	0000 0000 0000 0111 +
			  0010 0000
	---------------------
	0000 0000 0010 0111
		terzo ciclo
		c = 1
		i = 2; (0010)
		2 << 2 = 8; (1000)
		res += 1 << 8; (0001 << 1000) = (0000 0001 0010 0111);

	aggiungo 1 shiftato di 8 posti

	0000 0000 0010 0111 +
		 0001 0000 0000
	---------------------
	0000 0001 0010 0111

	al quarto ciclo viene inserito 0 shiftato di 12 posti


		*/

		val /= 10;

	}

	return res;

}
