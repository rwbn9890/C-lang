#include<stdio.h>

int main(){
	int i,j;
	for(i=1; i<=5; i++){
		for(j=1; j<=5; j++){
			printf("%d " , j);	
		}
		printf("\n");
	}	
	printf("----------\n");
	
	
	for(i=1; i<=5; i++){
	for(j=1; j<=5; j++){
			printf("%d " , i);	
		}
		printf("\n");
	}
	printf("----------\n");
	
		
	for(i=1; i<=5; i++){
	for(j=1; j<=i; j++){
			printf("%d " , j);	
		}
		printf("\n");
	}	
	printf("----------\n");
	
				
	for(i=1; i<=5; i++){
	for(j=1; j<=i; j++){
			printf("%d " , i);	
		}
		printf("\n");
	}	
	printf("----------\n");
	
		
		
	for(i=1; i<=5; i++){
	for(j=i; j<=5; j++){
			printf("%d " , j);	
		}
		printf("\n");
	}	
	printf("----------\n");
	
	
			
		
	for(i=1; i<=5; i++){
	for(j=i; j<=5; j++){
			printf("%d " , i);	
		}
		printf("\n");
	}	
	printf("----------\n");
	
	return 0;
}
