#include "std.h"

void find_substring( char* str, char* substr, size_t* result )
{
	size_t j = 0;
	for( size_t i=0; str[i]!=0; ++i )
	{
		size_t k;
		for(k=0; substr[k]!=0 & str[i+k]==substr[k]; ++k );
		if( substr[k] == 0 )
		{
			result[j] = i;
			++j;
		}
	}
	if( j == 0 )
	{
		result[0] = -1;
	}
}
