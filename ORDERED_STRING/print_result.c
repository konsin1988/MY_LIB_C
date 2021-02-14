#include <stdio.h>

void print_result(char* string, int* words, int number)
{
	printf("\nWords in alphabetic order: \n");
	for(size_t i=0; i<number; ++i)
	{
		printf("\t%s\n", &string[words[i]]);
	}
}
