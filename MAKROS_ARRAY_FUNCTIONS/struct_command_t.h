#ifndef __COMMAND_T_
#define __COMMAND_T_

typedef struct tagCOMMAND 
{
	const char* name;
	void (*function)(void);
} command_t;

void quit_command();
void init_command();

#endif
