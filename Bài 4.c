#include <stdio.h>

int main () {
	int a,i;
	int number[a];
	
	printf("Nhap so phan tu cua mang:");
	scanf("%d", &a);
	
	
	if (a<=0) {
		printf("So phan tu khong hop le,nhap lai phan tu\n");
		return 1; 
	}
	
	printf("Nhap cac phan tu ccua mang\n");
	for (i=0;i<a;i++) {
		printf("phan tu %d:",i+1);
		scanf("%d", &number[i]);
		 
	}
	
	printf("Cac phan tu trong mang la:\n");
	for (i=0;i<a;i++) {
		printf("%d", number[i]);
		 
	} 
	printf("\n");
	
	return 0; 
	
}

