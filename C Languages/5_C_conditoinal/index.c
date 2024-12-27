#include<stdio.h>

int main(){
	
//	int a; 
//	int b;
//	
//	printf("A: ");
//	scanf("%d", &a);
//	
//	printf("B: ");
//	scanf("%d", &b);
//	
//	if(a > b){
//		printf("A is greater");
//	}	
//	else if(b > a){
//		printf("B is greater");
//	}
//	else{
//		printf("A & B are equal");
//	}

int order;

printf("press 1 for burger \n");
printf("press 2 for pizza \n");
printf("press 3 for sandwitch \n");
printf("Order: ");
scanf("%d", &order);

if(order == 1){

	printf("your ordered Burger");
}
else if(order == 2){
	printf("your ordered Pizza");
}
else if(order == 3){
	printf("your ordered sandwitch");
}
else{
	printf("invalide order");
}
	
	
	return 0;
}
