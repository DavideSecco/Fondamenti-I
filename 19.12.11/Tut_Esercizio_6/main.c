#include <stdint.h>

uint32_t conta_doppie(const char *s)
{
	size_t i = 0;
	uint32_t num = 0;
	while (s[i] != 0)
	{
		if (s[i] == s[i + 1])
			num = num + 1;
		i++;
	}
	return num;
}

int main()
{
	char stringa[] = "mmLa mamma ha fatto i toastmm";
	uint32_t num_doppie;
	num_doppie = conta_doppie(stringa);
	return 0;
}