#include<stdio.h>


int main(){
	
	
//	int arr[6] = {1, 2, 3, 4, 5,6};


					//   0  1  2
	int arr[3][3] = {	{1, 2, 3}, // 0
						{4, 5, 6}, // 1
						{7, 8, 9}  // 2
							};
	int i, j;						

		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
					printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	
	
//	int size = sizeof(arr)/ sizeof(arr[0]);
	
	
	
}
