#include<stdio.h>



void add(a,b){	
	printf("addition of a & b is: %d \n", a+b);

}


void sub(a, b){
		printf("substraction of a & b is:  %d \n", a-b);
}


void divid(a,b){	
		printf("devidation of a & b is:  %d \n", a/b);
}

void mult(a,b){
		printf("multiplication of a & b is:  %d \n", a*b);
}



int main(){
	
	int a,b;
	
	printf("a: ");
	scanf("%d", &a);
	
		
	printf("b: ");
	scanf("%d", &b);
	
	add(a, b);
	sub(a, b);
	divid(a, b);
	mult(a,b);
	
	

	
	return 0;
}



