#include <stdio.h>
#include "my_getch.h"

#define VK_ESCAPE   27

int main(int argc, char* argv[])
{
	printf("Press some key\n");
	int s = my_getch();
	while(s != VK_ESCAPE)
	{
		printf("Your key is %c. Press ESCAPE to enter!\n", (char)s);
		s = my_getch();
	}
	return 0;
}
