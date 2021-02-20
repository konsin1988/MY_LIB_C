#include "std.h"

int main(int argc, char** argv)
{
	STR str_d = str_init();
	printf("Enter word\n");
	scanf("%s", str_d.str);
	printf("String = %s\tlength = %zu\n", str_d.str, str_d.length(&str_d));
	
	return 0;
}
