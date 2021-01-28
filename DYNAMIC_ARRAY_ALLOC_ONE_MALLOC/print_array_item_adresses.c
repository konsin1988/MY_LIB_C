#include <stdio.h>
#include <stdlib.h>

void print_array_adresses(int** A, int N, int M)
{
	printf("\n");
	printf("   &A[i]        A[i]     &A[i][j]   \n"); 
	for(int i = 0; i<N; ++i)
		for(int j=0; j<M; ++j)
			printf("%10d %10d  %10d\n", &A[i], A[i], &A[i][j]);
	printf("\n");
	printf("A = %d; A[0] = %d; &A[0][0] = %d\n", A, A[0], &A[0][0]);
}
