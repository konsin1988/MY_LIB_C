#include <stddef.h>
#include <string.h>

void sort_string(char* string, int* words, int number)
{
	for(size_t i=1; i<number; ++i)
	{
		size_t j = i;
		while(j>0 && strcmp(&string[words[j]], &string[words[j-1]])<0)
		{
			int tmp = words[j];
			words[j] = words[j-1];
			words[j-1] = tmp;
			--j;
		}
	}
}
