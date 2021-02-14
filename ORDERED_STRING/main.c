#include <stdio.h>
#include <stddef.h>
#include <string.h>

#include "str_op.h"

char string[3000];
int words[1500];
int number;

int main(int argc, char** argv)
{
	readline(string);
	end_space(string, words, &number);
	sort_string(string, words, number);
	print_result(string, words, number);
	
	return 0;
}
	
