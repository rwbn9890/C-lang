#include<stdio.h>

int main(){
	
	int i, size;
	
	printf("size: ");
	scanf("%d", &size);
	
	int arr[size];
	
	for(i=0; i<size; i++){
		printf("arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	
	int sum = 0;
	
	for(i=0; i<size; i++){	
		sum += arr[i];  // sum = sum +arr[i]
	}
	
	int avg = sum / size;
	
		printf("avg = %d ", avg);


	
	
	
	return 0;
}
