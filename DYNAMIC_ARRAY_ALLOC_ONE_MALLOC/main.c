#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array_alloc.h"
#include "dynamic_array_free.h"
#include "print_array_item_adresses.h"

int main(int argc, char* argv[])
{
	int N, M;
	scanf("%d%d", &N, &M);

	int** A = dynamic_array_alloc(N, M);
	print_array_adresses(A, N, M);
	dynamic_array_free(A, N);	

	return 0;
}
