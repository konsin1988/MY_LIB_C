#include <stdio.h>
#include <unistd.h>

#include "_kbhit.h"

int main(int argc, char** argv)
{
	printf("Press any key..");
	while(! _kbhit() )
	{
		printf(".");
		fflush(stdout);
		usleep(100000);
	}
	printf("\nDone\n");

	return 0;
}
