#include<stdio.h>


void fun(){
    printf("I am funny \n");
}

void sum(int x, int y){
	printf("sum: %d \n", x+y );
}


int module(){
	int a = 10; 
	int b = 29;
	
	return b%a;

}


int avg(int a, int b){
	
	int sum = a+b;
	
	return sum/2;
}


int main(){
	
	// TNRN = Take Nothing Return Nothing

fun();


// TSRN = Take Something Return Nothing
sum(10, 20);


// TSRN = Take Nothing Return Something

printf("TNRS: %d", module());

// TSRN = Take Something Return Something

printf("avg:  %d" , avg(26,27));



    return 0;
}
