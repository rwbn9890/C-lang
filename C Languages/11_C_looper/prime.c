#include<stdio.h>

int main(){
		
		int num=7;
		int count=0;
		int i;
		
		for(i=2; i<num; i++){
			
			if(num%i==0){
				
				count++;
				  
			}
		}
		
		
		if(count == 0 ){
			printf("is prime number");
		}
		else {
			printf("not prime number");
		}


	return 0;
}
