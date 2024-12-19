#include<stdio.h>

int main(){
	
	int num1, num2;
	int *num1Prt , *num2Prt, tongPrt ;
	
	printf("Vui long nhap so thu nhat: ");
	scanf("%d", &num1);
	
	printf("Vui long nhap so thu hai : ");
	scanf("%d", &num2);
	
	num1Prt = &num1;
	num2Prt = &num2;
	
	tongPrt = *num1Prt + *num2Prt;
	
	printf("Tong cua %d va %d la %d", *num1Prt, *num2Prt, tongPrt);
	
	
	
	
	
	
	
	return 0;
}
