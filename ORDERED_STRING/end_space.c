#include <stddef.h>
#include <stdbool.h>
#include <string.h>

#include "ch_strlen.h"

void end_space(char* string, int* words, int* number)
{
	bool flag = true;
	*number = 0;
	size_t i = 0;
	while(string[i] != '\n')
	{
		if(string[i] == ' ')
		{
			string[i] = 0;
			flag = true;
			++i;
		}
		else if(flag)
		{
			words[*number] = i;
			++(*number);
			flag = false;
			++i;
		}
		else 
		{
			++i;
			continue;
		}
	}
}
