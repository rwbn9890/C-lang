#include<stdio.h>

int main(){
	int i, j;
//	for(i=1; i<=5; i++){
//		
//		for(j=1; j<i; j++){
//			printf("  ");
//		}
//		
//		for(j=i; j<=5; j++){
//			if(j%2==0){
//				printf("0 ");
//			}
//			else {
//				printf("1 ");
//			}
//		}
//		printf("\n");
//	}
//	
//	
	
	
	
	
	
//		for(i=5; i>=1; i--){
//		
//			for(j=1; j<i; j++){  //  j<=5, 4, 2
//				printf("  ");
//			}
//		
//			for(j=i; j<=5; j++){
//				printf("%d ", j);
//			}
//			
//			
//			for(j=5-1; j>=i; j--){
//				printf("%d ", j);
//			}
//			
//			
//		printf("\n");
//	}





//
//for(i=0; i<=5; i++){
//	if(i==0 || i==2){
//		printf("* * * * *\n");
//	}
//	else if(i==1){
//		printf("*       *\n");
//	}
//	else{
//		printf("*\n");
//	}
//
//}





int num = 11;
		for(i=5; i>=1; i--){
			for(j=i; j<5; j++){  //  j<=5, 4, 2
				printf("%d ", num);
				num++;
			}
			
		printf("\n");
	}
	
	return 0;
}
