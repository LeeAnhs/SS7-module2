#include <stdio.h>

int main () {
	//khai bao va gan gia tri cho mang
	int a[]={1,2,3,4,5};
	int arraySize=sizeof(a)/sizeof(int);
	int i;
	
	
	printf("Cac phan tu trong mang la:\n");
	for (i=1;i < arraySize; i++){
		printf("Phan tu thu %d=%d\n",i,a[i]);
	}
	
	printf("Do dai cua mang: %d\n", arraySize);
	
	
	return 0;
	 
	 
}
