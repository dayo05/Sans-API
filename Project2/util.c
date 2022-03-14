#include "util.h"

int get_int_length(int a)
{
	int c = 1;
	while (a > 10) {
		a /= 10;
		c++;
	}
	return c;
}

int get_long_length(long long a)
{
	int c = 1;
	while (a > 10) {
		a /= 10;
		c++;
	}
	return c;
}

int get_byte_length(BYTE b)
{
	if (b >= 100) return 3;
	if (b >= 10) return 2;
	return 1;
}