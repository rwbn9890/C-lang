#include<stdio.h>


int main(){
	
	
//	(a == b) ? printf("Are Equal") : printf("not equal");

	

// 	if(choice==1){
// 		printf("your ordered Pizza");
//	 }
//	 else if(choice==2){
// 		printf("your ordered Burger");
//	 }
//	else if(choice==3){
// 		printf("your ordered sandwitch");
//	 }
//	 else {
//	 	printf("choose valid choice");
//	 }
//	 


 	int choice;
 	
 	printf("MENUE:-- \n");
 	printf("press 1 for pizza \n");
 	printf("press 2 for Burger \n");
 	printf("press 3 for Sandwitch \n");
 	printf("-------- \n");
 	printf("Enter your choice: ");
 	scanf("%d", &choice);
 	
 	
 	
	 switch(choice){
	 			case 1 : printf("your ordered Pizza \n");
	 					 printf("select type \n");
	 							printf("press 1 for onion pizza \n");
							 	printf("press 2 for double cheese pizza \n");
							 	printf("press 3 for margaritta pizza \n");
							 	printf("-------- \n");
							 	int type;
							 	printf("select pizza type: ");
							 	scanf("%d", &type);
							 	if(type==1){
							 		printf("your ordered Onion pizza");
								 }
								 else if(type==2){
								 	printf("your ordered cheese pizza");
								 }
								 else if(type==3){
								 	printf("you ordred margaritta pizza");
								 }
								 else {
								 	printf("this pizza is not available");
								 }
	 			
	 					
	 				break;
	 			case 2 : printf("your ordered Burger");
	 				break;
	 			case 3 : printf("your ordered sandwitch"); 
	 				break;
	 			default : printf("choose valid choice");
	 				break;
	 }
 	
	


	


	
	return 0;
}
