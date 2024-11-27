#include <stdio.h>

int main () {
	int a[5];
	int i;
	int checking=0;
	
	printf("Nhap 5 so nguyen\n");
	for (i=0;i<5;i++) {
		printf ("Nhap so thu %d :",i + 1 );
		scanf("%d", &a[i]);
	}
	
	printf("Cac so chan trong mang la:\n");
	for (i=0;i<5;i++) {
		if (a[i] % 2 == 0){
			printf("%d", a[i]);
			checking++;	
		}
	}
	if (checking==0) {
		printf("mang khong chua so chan\n");
	} else {
		printf("\n");
	}
	
	return 0;
	
}
