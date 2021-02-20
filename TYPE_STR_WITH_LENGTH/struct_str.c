#include "std.h"



static size_t my_strlen( str_ptr str )
{
	size_t length = 0;
	char* ptr = (*str).str;
	while( *ptr != '\0')
	{
		length++;
		++ptr;
	}
	return length;
}

STR str_init()
{
	STR str_len;
	str_len.length = my_strlen; 
	return str_len;
}

