#include <stdio.h>
#include <stdlib.h>

int** dynamic_array_alloc(int N, int M)
{
	int** A = (int**)malloc(N * sizeof(int*) + N * M * sizeof(int));
	int* start = (int*)((char*)A + N * sizeof(int*));
	for(int i=0; i<N; ++i)
		A[i] = start + i * M; 
	return A;
}
