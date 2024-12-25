#include <stdio.h>
#include <math.h>

int isPrime(int num) {
	if (num <= 1) {
		return 0;
	}
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n,b;
	int a[100];
	int max;
	int min;
	int tong;
	int khongco=0;
	while(1) {
		printf("MENU\n");
		printf("1.Nhap so phan tu va gia tri cua mang \n");
		printf("2.In ra gia tri cua mang \n");
		printf("3.Tim gia tri nho nhat va lon nhat \n");
		printf("4.In ra tong cac phan tu\n");
		printf("5.Them 1 phan tu vao cuoi mang, vi tri them \n");
		printf("6.Xoa phan tu\n") ;
		printf("7.Sap xep mang theo thu tu giam dan bubble sort\n");
		printf("8.Cho nguoi dung nhap vao mot phan tu co ton tai trong mang khong\n");
		printf("9.In ra so nguyen to\n");
		printf("10.Sap xep mang tang dan theo selection sort\n");
		scanf("%d",&b);
		switch(b) {
			case 1:
				printf("Nhap so phan tu");
				scanf("%d",&n);
				for(int i=0; i<n; i++) {
					printf("Vi tri %d ",i);
					scanf("%d",&a[i]);
				}
				printf("\n");
				break;
			case 2:
				for(int i=0; i<n; i++) {
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			case 3:
				max=a[0];
				min=a[0];
				for(int i=0; i<n; i++) {
					if(max<a[i]) {
						max=a[i];
					}
				}
				printf("Gia tri lon nhat %d\n",max);
				for(int i=0; i<n; i++) {
					if(min>a[i]) {
						min=a[i];
					}
				}
				printf("Gia tri be  nhat %d\n",min);
				printf("\n");
				break;
			case 4:
				for(int i=0; i<n; i++) {
					tong+=a[i];
				}
				printf("%d",tong);
				printf("\n");
				break;
			case 5:
				int them;
				int vitri;
				printf("Them phan tu ");
				scanf("%d",&them);
				printf("vi tri ") ;
				scanf("%d",&vitri) ;
				for(int i=n; i>=vitri; i--) {
					a[i]=a[i-1];
				}
				n++;
				a[vitri]=them ;
				printf("\n");
				break;
			case 6:
				printf("vi tri can xoa  ") ;
				scanf("%d",&vitri) ;
				for(int i=vitri; i<n-1; ++i) {
					a[i]=a[i+1];
				}
				n--;
				printf("\n");
				break;
			case 7:
				for(int i=0; i<n; i++) {
					for(int j=0; j<n-1; j++) {
						if(a[j]<a[j+1]) {
							int temp=a[j];
							a[j] = a[j+1];
							a[j+1]=temp	;
						}
					}
				}
				for(int i=0; i<n; i++) {
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			case 8:
				int search;
				printf("Nhap phan tu can tim");
				scanf("%d",&search);
				for(int i=0; i<n; i++) {
					if(search==a[i]) {
						printf("vi tri %d",i);
						break;
					}
				}
				printf("\n");
				break;
			case 9:
				for (int i = 0; i < n; i++) {
					if (isPrime(a[i])) {
						printf("%d ", a[i]);
						khongco++;
					}
				}
				if(khongco==0) {
					printf("Khong co so nguyen to nao"); 
					for(int i=0; i<n; i++) {
						printf("%d ",a[i]);
					}
				}
				printf("\n");
				break;
			case 10:
				for(int i=0; i<n; i++) {
					int min_index=i;
					for(int j=i+1; j<n; j++) {
						if(a[min_index]>a[j]) {
							min_index=j;
						}
					}
					int temp=a[i];
					a[i]=a[min_index];
					a[min_index]=temp;
				}
				for(int i=0; i<n; i++) {
					printf("%d ",a[i]);
				}
				printf("\n");
				break;
			default:
				printf("Lua chon khong hop le\n");
		}
	}
	return 0;
}
