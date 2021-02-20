#pragma once

typedef struct STR* str_ptr;
typedef size_t (*my_length)( str_ptr ); 

struct STR
{
	char str[20];
	my_length length;
};

typedef struct STR STR;

STR str_init();
