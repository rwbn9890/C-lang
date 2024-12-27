#include<stdio.h>

int main(){
	
	int i, size;
	
	printf("size: ");
	scanf("%d", &size);
	
	int A[size];
	int B[size];
	int C[size];
	
	for(i=0; i<size; i++){
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
	
		
	for(i=0; i<size; i++){
			printf("B[%d]: ", i);
		scanf("%d, ", &B[i]);
	}
	
	printf("C[%d]={ ", size);
	for(i=0; i<size; i++){
	 C[i] = A[i] + B[i];
	 printf("%d,", C[i]);
	}
	
	printf(" }");
	


	return 0;
}
