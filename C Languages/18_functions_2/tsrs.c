#include<stdio.h>


// TSRS - Take Something, Return Something

int sum(n){
	int i;
	int sum =0;
	for(i=0; i<=n; i++){
		sum = sum + i;
	}
	
	return sum;
}


int main(){
	
	int	a;
	a = 10;
	
	int avg = sum(a)/a;

printf("avg: %d ", avg);

	return 0;
}
