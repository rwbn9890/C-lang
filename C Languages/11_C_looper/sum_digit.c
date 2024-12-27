#include<stdio.h>

int main(){
	
	int digit = 384;
	
	int last_digit = digit%10;
	
	while(digit > 10){
		digit = digit/10;  // 384/ 10 == 38/10 = 3
	}
	
		int sum_digit = last_digit + digit;
	printf("Sum of Given Digit is : %d", sum_digit);
	
	return 0;
}
