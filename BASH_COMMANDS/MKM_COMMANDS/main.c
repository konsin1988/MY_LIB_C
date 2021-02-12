#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
	if(argc<=1)
	{
		system("make clean");
		system("clear");
		system("make");
	}
	else if(argc == 2)
	{
		if(!strcmp(argv[1], "c"))
		{
			system("clear");
		}
		else if(!strcmp(argv[1], "o"))
		{
			system("make clean");
			system("clear");
		}
		
		else
		{
			char command[20] = "./";
			strcat(command, argv[1]);
			system("make clean");
			system("clear");
			system("make");
			printf("\n\t\t+++FUNCTION <%s> "
				"IN WORK+++\n\n", argv[1]);
			system(command);
			printf("\n\n");
		}
	}
	return 0;
}
