#include<stdio.h>

int main(){
	
	int a = 13;  
	int b = 19;	
	int temp;    

	temp = a;   // temp = 13;
	a = b;      // a = b = 19;
	b = temp;   // b = temp = 13;
	
	//	printf("temp: %d \n", temp);
	
	printf("a: %d \n", a);
	printf("b: %d", b);
}
