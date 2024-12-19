#include<stdio.h>

int main(){
	
	int number = 5;
	int *numberPrt;
	
		numberPrt = &number;
	
	printf("Gia tri cua bien x la %d\n", number );
	printf("Gia tri cua bien x la %d\n", *numberPrt);
	
	return 0;
}
