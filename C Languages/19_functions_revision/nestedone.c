#include<stdio.h>



int sum(int a[], int size){
	
	int sum = 0;
	int i;

	for(i=0; i<size; i++){
		sum += a[i];
	}
	
	return avg( sum,  size);

}


int avg(int sum, int size){
	
	int avg = sum/size;
	
	return avg;
}


int main(){
	
	int arr[5] = {1, 2, 3, 4, 5};
	
	int size = sizeof(arr)/ sizeof(arr[0]);


printf("AVG: %d", sum(arr, size));

    return 0;
}
