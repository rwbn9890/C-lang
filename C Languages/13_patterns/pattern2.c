#include<stdio.h>


int main(){
	
	int i, j, k;
	
	for(i=1; i<=5; i++){
		
		
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		
		for(k=i; k<5; k++){
			printf("  ");
		}
		
			
		for(k=i; k<5; k++){
			printf("  ");
		}
		
		for(j=i; j>=1; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	
	
	printf("\n***********\n");
	
	
	for(i=1; i<=5; i++){
		
		for(j=i; j<=5; j++){
			printf("%d ", j);
		}
		
		for(k=1; k<i;k++){
			printf("  ");
		}
		
			for(k=1; k<i;k++){
			printf("  ");
		}
		
			for(j=5; j>=i; j--){
			printf("%d ", j);
		}
		
		
			printf("\n");
	}
	
	
		printf("\n***********\n");
	
		for(i=1; i<=5; i++){
			
			for(k=i; k<5; k++){
			printf("  ");
		}
		
		for(j=1; j<=i; j++){
			printf("%d ", j);
		}
		
		for(j=i; j>=1; j--){
			printf("%d ", j);
		}
					
		for(k=i; k<5; k++){
			printf("  ");
		}
		
		printf("\n");
	}
	
	
	
	return 0;
}
