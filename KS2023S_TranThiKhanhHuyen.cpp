#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	//1. Khai bao mang 1 chieu so nguyen gom 100 phan tu
	int numbers[100];
	int currentIndex = 0;
	int size;	
	int sumNumbers;
	int min,max;
	int findNumber;
	int cntNumber;
	int addIndex;
	int addValue;
	int n;
	int k;
	//2. In menu
	do{	
		printf("**************MENU******************\n");
		printf("1. Nhap gia tri n phan tu cua mang\n");
		printf("2. In gia tri cac phan tu trong mang\n");
		printf("3. Tinh trung binh cac phan tu duong trong mang\n");
		printf("4. In ra vi tri (chi so)cac phan tu co gia tri bang k trong mang k\n");
		printf("5. Su dung thuat toan sap xep noi bot sap xep giam dan\n");
		printf("6. Tinh so luong cac phan tu la so nguyen to trong mang\n");
		printf("7. Sap xep cac phan tu chan chia het cho 3 o dau mang theo thu tu tang dan, cac phan tu le chia het cho 3 o cuoi mang theo thu tu giam dan , cac phan tu con lai o giua mang theo thu tu tang dan \n");
		printf("8. Nhap gia tri m tu ban phim , chen gia tri mang(sap sep giam dan)theo dung vi tri\n");
		printf("9. Thoat\n");
		printf("Lua chon cua ban:");
		int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1 :
				printf("Nhap vao so phan tu cua mang:");
				scanf("%d",& size);
				for(int i=0;i<size;i++){
					printf("numbers[%d]=",currentIndex);
					scanf("%d",&numbers[currentIndex]);
					currentIndex++;
				}
				break;
			case 2 :
				printf("Gia tri cac phan tu trong mang :\n");
				for(int i=0;i<currentIndex;i++){
					printf("%d\t",numbers[i]);
				}
				printf("\n");
				break;	
			case 3 : 
                 for (int i = 0; i < sizeof(numbers)/sizeof(float); i++) {
                 	printf("numbers [%d]=",i);
                 	scanf("%f",&numbers[i]);
  				}
                  sumNumbers = 0;
  				for(int i = 0; i < sizeof(numbers)/sizeof(float); i++) {
    			sumNumbers + numbers[i];
   				}
				break;
			case 4 :
				printf("nhap gia tri k \n");
				scanf("%d",&k);
					for (int i=0 ; i<currentIndex; i++)
					{
					if(numbers[i]==k){
					printf("Phan tu co chi so %d cua mang co gia tri bang %d",i,k);
				} 
			} 
		          break;
				  case 5 :
				printf("Nhap so phan tu cua mang:");
                scanf("%d", &n);
                printf("Nhap gia tri cac phan tu mang:\n"); 
                	for (int i=0;i<n;i++){
    				printf("numbers [%d]=",i);
    				scanf("%d", &numbers[i]);
  				}
 					for (int i=0;i<n-1;i++){
    			for(int j=0;j<n-i-1;j++){
      			if (numbers[j]>numbers[j-1]){
        			int temp = numbers[j];
        			numbers[j] = numbers [j-1]; 
        			numbers[j-1] = temp;
      			}
   		 	}
  		}
                printf("Mang sau khi da sap xep giam dan:\n"); 
      			 for (int i=0;i<n;i--){
        		printf("%d\t", numbers[i]);
  			}
				break;	
				case 6 :
				sumNumbers = 0;
				printf("Cac so nguyen to trong mang: ");
				for(int i=0;i<currentIndex;i++){
					int isPrime = 0;
					if(numbers[i]>=2){
						for(int j=2;j<=sqrt(numbers[i]);j++){
							if(numbers[i]%j==0){
								isPrime = 1;
								break;
							}
						}
					}else{
						isPrime=1;
					}
					if(isPrime==0){
						printf("%d\t",numbers[i]);
						sumNumbers+=numbers[i];
					}
				}
				printf("\n Cac so nguyen to la: %d\n",sumNumbers);
				break;
				case 7:
					break;
				case 8:
    			printf("Nhap gia tri m: ");
    			scanf("%d", &numbers);
					break;
				case 9:
				exit(0);
			default:
				printf("Vui long chon tu 1-9");
		}
	}while(1==1);
}
				
