#include<stdio.h>

int main(){
					//  0   1   2   3   4
	int arr[5][5] = { {36, 11, 12, 13, 14},   // 0
					  {15, 94, 17, 7, 19},   // 1
					  {20, 21, 88, 23, 99},   // 2
					  {46, 8, 27, 28, 29},   // 3
					  {30, 31, 32, 39, 34} }; // 4	  
					  
		int i, j;
		
		/// 0 4
		/// 1 3
		//  2 2
		//  3 1
		//  4 0
		
	int min = arr[0][0];
	int max = 0;				
		for(i=0; i<5; i++){
			for(j=0; j<5; j++){
				if(max < arr[i][j]){
						max = arr[i][j];
				}
				
				if(min > arr[i][j]){
					min = arr[i][j];
				}
			}
		}
		
		printf("largest ele: %d \n", max);
			printf("smallest ele: %d \n", min);

		
		
		
		
	
	

// row and column wise sum	
	
//	int sum = 0;				
//		for(i=0; i<5; i++){
//			for(j=0; j<5; j++){
//					printf("%d ", arr[i][j]);
//				
//					sum = sum + arr[i][j];
//			}
//			printf(" = %d ", sum);
//			printf("\n");
//			sum = 0;
//		}

	
		
		
		
		
		
		
//  anti diagonal elements	
		
		
				
//		
//		for(i=0; i<5; i++){
//			for(j=0; j<5; j++){
//				if(i+j == 5-1){
//					printf("%d ", arr[i][j]);
//				}
//				else{
//					printf("   ");
//				}
//			
//			}
//			printf("\n");
//		}
//	
//	
	
	
	
	
		// diagonal elements	
		
			
		
		
//		
//		for(i=0; i<5; i++){
//			for(j=0; j<5; j++){
//				if(i==j){
//					printf("%d ", arr[i][j]);
//				}
//				else{
//					printf("   ");
//				}
//			
//			}
//			printf("\n");
//		}
//		
		
		
		
		
		
	// boundr elements	
			
		
		
//		for(i=0; i<5; i++){
//			for(j=0; j<5; j++){
//				if(i==0 || j==0 || i==5-1 || j==5-1){
//					printf("%d ", arr[i][j]);
//				}
//				else{
//					printf("   ");
//				}
//			
//			}
//			printf("\n");
//		}
					  
	return 0;
}
