#include<stdio.h>

int main(){
	
	int salary, hra, da, ta, hra_amount, da_amount, ta_amount;
	
	printf("Salary: ");
	scanf("%d", &salary);
	
	printf("HRA: ");
	scanf("%d", &hra);
	
	printf("DA: ");
	scanf("%d", &da);
	
	printf("TA: ");
	scanf("%d", &ta);

	hra_amount  = hra*salary /100;
	da_amount = da*salary / 100;
	ta_amount = ta*salary / 100;
	
	int gross_salary = salary + hra_amount + da_amount + ta_amount;
	
	printf("Gross Salary: %d", gross_salary);
	
	return 0;
}
