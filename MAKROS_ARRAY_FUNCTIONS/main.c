#include <stdio.h>

#include "struct_command_t.h"

#define COMMAND(NAME) { #NAME, NAME ## _command }
#define SIZE 2

command_t commands[] = 
{
	COMMAND(quit),
	COMMAND(init),
};

int main(int argc, char** argv)
{
	for(size_t i=0; i<SIZE; ++i)
	{
		printf("%s says: ", commands[i].name);
		commands[i].function();
	}

	return 0;
}
