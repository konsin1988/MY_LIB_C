#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "in_range.h"
#include "my_getch.h"

#define VK_ESCAPE      27
#define VK_RETURN      10
#define VK_BACKSPACE   127
#define BUFF_SIZE_U32  11

#define STR_MAXU32     "4294967295"  // max unsigned

bool try_input_u32(const char* title, unsigned* value)
{
	char key, buffer[BUFF_SIZE_U32] = {0};
	char* ptr = buffer;
	//memset(buffer, 0, sizeof(buffer));

	do
	{
		printf("\r%s%s", title, buffer); // print to konsole
		key = my_getch(); // enter next item 

		// number (0...9). Add to buffer on the right 
		// and check the range 
		if(key > 0x29 && key < 0x40)
		{
			*ptr = key;  // adding to buffer on the right
			if (in_range(buffer, STR_MAXU32)) ptr++; // checking the range
			else *ptr = 0; // delitting (over the range)
		}
		// Press BACKSPACE
		else if (key == VK_BACKSPACE && ptr > buffer)
		{
			*--ptr = 0;
			printf("\b ");

		}

		// Press ENTER
		else if (key == VK_RETURN && strlen(buffer))
			return (sscanf(buffer, "%u", value));
		else continue;
	}
	while (key != VK_ESCAPE);

	return false;
}
