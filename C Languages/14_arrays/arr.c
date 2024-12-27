#include<stdio.h>

int main(){
	int i;
	int id[5] = {9, 6, 3, 5, 2};
	
	
	int size = sizeof(id)/ sizeof(id[0]);
	
//	id[0]; == size of(9)
//	id[1];

int sum =0;
	
	
	for(i=0; i<5; i++){
		
		sum = sum + id[i];
	
	}
	
	int avg = sum/size;
	
		printf("avg = %d \n", avg);
//	
	return 0;
}
