#include<stdio.h>

int main(){
	
	int num1 = 10;
	int num2 = 20;
	int *num1Prt, *num2Prt;
	
	num1Prt = &num1;
	num2Prt = &num2;
	
	printf("Gia tri truoc khi doi la num1 = %d num2 = %d\n", *num1Prt, *num2Prt);
	
	int tem = *num1Prt;
	*num1Prt = *num2Prt;
	*num2Prt = tem;
	printf("Gia tri sau khi thay doi la num1 = %d num2 = %d", *num1Prt, *num2Prt);
	
	
	return 0;
	
	
	
	
}
