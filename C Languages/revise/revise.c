#include<stdio.h>




void add(int f, int s){
	
	printf("addtion of %d and %d = %d", f, s, f+s);
}



void sub(int f, int s){
	
	printf("substraction of %d and %d = %d", f, s, f-s);
}

int main(){
	
int first;
int second;

int choice;

printf("Enter your choice:");
scanf("%d", &choice);


printf("Enter first num:");
scanf("%d", &first);

printf("Enter second num:");
scanf("%d", &second);

switch(choice){
	
	case 1:
		add(first, second);
		break;
		
	case 2:
		sub(first, second);
		break;
		
	default:
		printf("valid num");
		break;
}







	return 0;
}
