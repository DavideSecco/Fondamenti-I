#include "sequenza.h"

int main(void)
{
	struct seq n;
	const char v[] = "seq2.bin";
	bool ris = seq_load(v, &n);
	return 0;
}