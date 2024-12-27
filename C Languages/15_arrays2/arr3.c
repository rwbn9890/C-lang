#include<stdio.h>

int main(){
	int i, start_year, end_year ;
	
	int arr[50];
	
	 printf("start_year: ");
	 scanf("%d", &start_year);

	
	 printf("end_year: ");
	 scanf("%d", &end_year);
	 
	 int size =0;
	 
	 for(i=start_year; i<=end_year; i++){
	 	if(i%4==0){
	 		
	 		arr[size] = i; //
	 		size++;
		 }
	 }
	 
	 printf("leap_years = { ");
	 for(i=0; i<size; i++){
	 	printf("%d, ", arr[i]);
	 }
	 
	  printf("}");
	
	return 0;
}
