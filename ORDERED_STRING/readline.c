#include <stdio.h>
#include <string.h>

void readline(char* string)
{
	printf("Enter string to order:\n");
	scanf("%[^\n]%*c", string);
	strcat(string, " \n");
}
