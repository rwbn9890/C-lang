#include<stdio.h>

//int say_some(){
//	
//	return 100;
//	printf("%d", 100);
//}
//
//int say_more(){
//	return 200;
//}



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
	
//	a =100;
//	
//	say_some() == 100
//	
//	printf("chec: ");
//	printf("%d", say_some()+say_more());	
	
	return 0;
}
