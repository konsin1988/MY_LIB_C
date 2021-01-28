#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool in_range(char* buff, const char* max)
{
	int lb = strlen(buff), lm = strlen(max);
	return (lb != lm) ? (lb < lm): strcmp(max, buff) >= 0;
}
