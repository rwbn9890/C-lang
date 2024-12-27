#include<stdio.h>

int main(){
	
	int num;
	printf("Enter number to find Factorial: ");
	scanf("%d", &num);
	
	int fact = 1;

	int i=1;
	while(i<=num){  
	  ///  i = 1; i=2; i=3; i= 4; i=5
		fact = fact*i;  // fact = 1*1 = 1; fact = 1*2 = 2; fact = 2*3 = 6; fact = 6*4 = 24; fact = 24*5 = 120;
		
		i++;
	}
	
	
	printf("Factorial of %d is: %d",num, fact);
	return 0;
}
