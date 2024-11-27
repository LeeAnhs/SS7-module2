#include <stdio.h>

int main () {
	//khai mang so nguyen co 5 phan tu
	int a[5];
	int i;
	//gan ga tri cho cac phan tu
	for(i=0;i<sizeof(a)/sizeof(int); i++) {
		printf("array[%d]= \n",i);
		scanf("%d",&a[i]);
	}
	printf("phan tu thu 1 =%d\n",a[0]);
	printf("phan tu thu 2 =%d\n",a[1]);
	printf("phan tu thu 3 =%d\n",a[2]);
	printf("phan tu thu 4 =%d\n",a[3]);
	printf("phan tu thu 5 =%d\n",a[4]);
	return 0;
	
	
	
}
