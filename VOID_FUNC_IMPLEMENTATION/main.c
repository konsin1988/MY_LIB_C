#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define N 10

void func( void* arr, size_t num, size_t size, void (*func)(void*) );
void print_result( void* arr, size_t num, size_t size, void (*func)(void*) );

void delete_even(void* a);
void double_num(void* a);
void delete_even_double(void* a);
void double_double(void* a);
void print_int(void* a);
void print_double(void* a);

int main(int argc, char** argv)
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	double b[] = { 1.2, 2.2, 3.4, 4.5, 5.3, 6.3, 7., 8., 9., 10. };

	func(a, N, sizeof(int), delete_even);
	print_result(a, N, sizeof(int), print_int);

	func(a, N, sizeof(int), double_num);
	print_result(a, N, sizeof(int), print_int);

	func(b, N, sizeof(double), delete_even_double);
	print_result(b, N, sizeof(double), print_double);

	func(b, N, sizeof(double), double_double);
	print_result(b, N, sizeof(double), print_double);
}

void func( void* arr, size_t num, size_t size, void (*func)(void*) )
{
	size_t i;
	char* ptr = (char*)arr;
	for (i=0; i < num; ++i)
	{
		func((void*) (ptr+ i*size));
	}
}

void print_result( void* arr, size_t num, size_t size, void (*func)(void*) )
{
	size_t i;
	char* ptr = (char*)arr;
	for (i = 0; i < num; ++i) {
		func((void*) (ptr + i * size));
	}
	printf("\n");
}

void delete_even(void* a) {
	int tmp = *((int*)a);
	if (tmp % 2 == 0) {
		*((int*)a) = 0;
	}
}

void double_num(void* a) {
	*((int*)a) *= 2;
}

void delete_even_double(void* a) {
	int tmp = *((double*)a);
	if (tmp % 2 == 0) {
		*((double*)a) = 0;
	}
}

void double_double(void* a) {
	*((double*)a) *= 2;
}

void print_int(void* a) {
	printf("%2d ", *((int*)a));
}

void print_double(void* a) {
	printf("%.2lf ", *((double*)a));	
}
