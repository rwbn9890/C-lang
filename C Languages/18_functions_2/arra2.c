#include<stdio.h>

int main(){
	
	
						//  0   1   2   3   4
	int arr[5][5] = { {36, 11, 12, 13, 14},   // 0
					  {15, 94, 17, 18, 19},   // 1
					  {20, 21, 88, 23, 99},   // 2
					  {46, 47, 27, 28, 29},   // 3
					  {30, 31, 32, 39, 34} }; // 4	 
					  
					  
					  int i,j;
					  int sum = 0;
					  
				for(i=0; i<5; i++){
				
					for(j=0; j<5; j++){
							
						sum += arr[j][i];
					}
					printf("sum: %d", sum);
					sum =0;
					printf("\n");
				}
				
				
	
	return 0;
}
