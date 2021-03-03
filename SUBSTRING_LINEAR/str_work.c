#include "std.h"
#include "find_substring.h"

size_t my_strlen( char* str )
{
	size_t i;
	for(i=0; str[i] != 0; ++i);
	return i;
}


char* allocate_memory(size_t N)
{
	char* str = (char*)malloc(N * sizeof(char));
	if( !str )
		printf("Allocation error");
	return str;
}

char* reallocate_memory( char* str )
{
	size_t n = my_strlen(str);
	str = realloc(str, n);
	if(!str)
		printf("Allocation error");
	return str;
}	

void free_memory( char* str, char* substr )
{
	free(str);
	free(substr);
}

char* enter_str(size_t N, char* type)
{
	char* str = allocate_memory(N);
	printf("Enter %s:\n", type);
	scanf("%[^\n]%*c", str);
	str = reallocate_memory(str);
	return str;
}

void print_result( char* str, char* substr )
{
	size_t i;
	size_t* result = (size_t*)malloc(100 * sizeof(size_t));
	find_substring( str, substr, result );
	printf( "Indexes of substring \'%s\' in string \'%s\' = ",
			substr, str );
	for(i=0; result[i]; ++i)
		printf("%zu ", result[i]);
	printf("\n");
	free_memory( str, substr );
	free(result);
}

