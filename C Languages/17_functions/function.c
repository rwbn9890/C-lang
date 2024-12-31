#include<stdio.h>



void sum_arr(){
	int arr[5] = {2, 4, 6, 8, 0};
	int i;
	int sum =0;
	
	for(i=0; i<5; i++){
		sum += arr[i];
	}
	printf("array_sum: %d \n", sum);
}


void iteration_sum(){		
	int sum=0;
	int i;
	for(i=0; i<10; i++){
		sum += i;
	}
	printf("iteration_sum: %d \n", sum);	
}


void digit_sum(){
	
	int a = 10;
	int b = 20;
	int sum = a+b;
printf("digit_sum: %d \n", sum);
	
}



int main(){
	
	digit_sum();
	
	iteration_sum();
	
	sum_arr();


	
	return 0;
}
