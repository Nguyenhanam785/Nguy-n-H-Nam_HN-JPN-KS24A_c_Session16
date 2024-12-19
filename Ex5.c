#include<stdio.h>

int main(){
	
	int *arrPrt;
	int n, m, i, newm;
	int arr[100];
	
	printf("Vui long nhap kich thuoc mang : ");
	scanf("%d", &n);
	
	if( n <= 0 || n > 100){
		printf("Kich thuoc mang khong hop le vui long thu lai!");
		return 1;
	}else{
		for(int i = 0; i < n; i++){
			printf("Vui long nhap phan tu thu %d : ", i + 1);
			scanf("%d", &arr[i]);
		}
		arrPrt = arr;
		
		printf("Mang ban vua nhap la : \n");
		for(int i = 0; i < n; i++){
			printf("%d ", *(arrPrt + i));
		}
		printf("\n");
		
	printf("Nhap vi tri ma ban muon sua : ");
	scanf("%d", &m );
	if( m <= 0 || m > n){
		printf("Vi tri ban nhap khong hop le.\n");
		return 1;
	}else{
	    printf("Ban muon sua phan tu thu %d thanh : ");
	    scanf("%d", &newm);
	    
	    arr[m-1] = newm;
	    
		printf("Mang sau khi sua la : \n");
		for(int i = 0; i < n; i ++){
			printf("Phan tu arr[%d] la : %d\n", i + 1, *(arrPrt + i));
		} 
	   
	}
		
   }
    return 0;		

}
