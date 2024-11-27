#include <stdio.h>

int main (){
	int a[]={1,2,3,4,5};
	int size=sizeof(a)/sizeof(int);
	int i;
	
	printf("Cac phan tu trong mang la:\n");
	for (i=0;i<size;i++) {
		printf("%d\n", a[i]);
	}
	printf("Do dai cua mang la:%d",size);
	
	return 0;
	}
	
	
	
	
	

