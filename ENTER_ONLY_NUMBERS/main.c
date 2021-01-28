#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "try_input_u32.h"
#include "my_getch.h"

#define VK_ESCAPE 27

int main(int argc, char* argv[])
{
	bool result;
	do
	{
		unsigned x;

		result = try_input_u32(" >> Enter unsigned decimal number (ESC = cancel): ", &x);
		if(result) printf("\n << Input number %u = 0x%08X\n", x, x);
		else printf("\n << Enter denied\n");
	}
	while (result);

	printf("\n >> Press any key for exit..");
	my_getch();
	printf("\n");
	return 0;
}
