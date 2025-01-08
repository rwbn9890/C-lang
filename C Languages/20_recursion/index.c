#include<stdio.h>
//
//int fact(int n){
//	int i;
//	int fa = 1;
//	for(i=n; i>=1; i--){	
//		printf("%d = %d * %d \n", fa, fa , i);
//		fa *= i;
//	}
//	return fa;
//}




int rec(n){  // 4

	 int n1 = n*rec1(n-1);
	 	printf("%d * %d \n", n, n1);
	return n1 ; // 4*rec1(3) // 4*6 = 24
}


int rec1(n){   // 3
		
		 int n1 = n*rec2(n-1);
		 	printf("%d * %d \n", n, n1);
	return n1; //  3*rec2(2) // 3*2 = 6
}


int rec2(n){   // 2
	
	 int n1 = n*rec3(n-1); 
	 	printf("%d * %d \n", n, n1);
	return  n1; //  2*rec3(1) == 2*1 == 2
}




int rec3(n){  //1

	int n1 = 1;
		printf("%d * %d \n", n, n1);
	return n1 ;  //
}



int main(){
	
	
//printf("fact: %d", fact(4));

printf("rec: %d", rec(4));

	
	return 0;
}
