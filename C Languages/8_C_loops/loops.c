#include<stdio.h>

int main(){
	
//	int j=1;
//	
//	while(j<=10){
//		printf("table= 2 * %d = %d \n", j , j*2);  // 2 
//
////	printf("hello world \n");
//		
//		j++;     
//	}


int i=1;

int sum =0;
while(i<=10){
	
	sum = sum + i;
	
	i++;
}

printf("%d", sum);

	
	return 0;
}