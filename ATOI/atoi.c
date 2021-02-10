#include <inttypes.h>
#include <stdlib.h>
#include <stddef.h>

int atoi(char* s)
{
	int i, n=0;
	for(i = 0; s[i]>='0' && s[i] <= '9'; ++i)
		n = 10 * n + (s[i] - '0');
	return n;

}

