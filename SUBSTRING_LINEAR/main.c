#include "std.h"

#define N 200
#define M 50

char* str;
char* substr;

int main(void)
{
	str = enter_str(N, "string");
	substr = enter_str(M, "substring");
	print_result( str, substr );
	return 0;
}
