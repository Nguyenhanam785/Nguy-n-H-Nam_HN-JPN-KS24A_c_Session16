#include<stdio.h>

int main(){
	int n, search;
	int check = 0;
	int arr[100];
	int *arrPrt;
	
	printf("Vui long nhap kich thuoc mang : ");
	scanf("%d", &n);
	
	if( n <= 0 || n > 100){
		printf("Mang ban  hap khong hop le\n");
	}else{
		for(int i = 0; i < n; i++){
			printf("Vui long nhap phan tu arr[%d] : ", i + 1);
			scanf("%d", &arr[i]);
		}
		
	arrPrt = arr;
		
    printf("Mang ban vua nhap la :");
    for(int i = 0; i < n; i++){
    	printf(" %d  ", *(arrPrt + i));
	}
    printf("\nNhap phan tu ma ban muon tim kiem : ");
    scanf("%d", &search);
    
    for(int i = 0; i < n; i++){
    	if(arr[i] == search){
    	    check++;
    	    printf("Vi tri cua phan tu %d la %d", search, i);
    	}
	}
    if (check == 0) {
        printf("Khong xuat hien phan tu yeu cau trong mang\n");
    } 

	}
	return 0;
}


