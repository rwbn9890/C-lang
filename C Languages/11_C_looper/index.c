#include<stdio.h>

int main(){
	
	int num;
	printf("Enter digit: ");
	scanf("%d", &num);
	
//	num/10 =  75/10 7


int count = 0;

	while(num > 0){ 
		
		num = num/10;
		
		count++;
	}
	
	printf("Digit: %d", count);
	
	return 0;
}
