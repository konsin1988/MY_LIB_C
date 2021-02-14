#include <stddef.h>

size_t ch_strlen(const char* str)
{
	return (*str) ? ch_strlen(++str) + 1 : 0;
}
