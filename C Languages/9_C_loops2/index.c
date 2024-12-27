#include<stdio.h>


int main(){
	
	int num;
	printf("Enter num= :");
	scanf("%d", &num);
	
	int i =0;
	
	int sum =0;
	while(i<=num){
		
		sum =sum +i;
		i++;
	}
	
	printf("Sum from %d to %d is: %d",i, num, sum);
	
	return 0;
}
