#include<stdio.h>


void sum(n){
	int i;
	int sum =0;
	for(i=1; i<=n; i++){
		sum += i;
	}
	
		avg(sum, n);
}


void avg(sum, n){
	int avg = sum/n;
	printf("avg: %d \n", avg);
	
	message();
}

void message(){
	printf("average is succesfull...!");
}


int main(){
	
	int n = 10;
	
	sum(n);

	
	
	
	return 0;
}
