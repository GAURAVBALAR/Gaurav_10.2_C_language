#include<stdio.h>

int array(){
int n;
	printf("Enter the size of Array :");
	scanf("%d",&n);
	int a[n];
	int i;
	int c=0;
	for(i=0;i<n;i++){
		printf("Enter the Array elements : a[%d]",i);
		scanf("%d",&a[i]);
		c+=a[i];
	}
	return c;
}

void main(){
	int d=array();
	printf("Sum of the Array Elements Is : %d",d);
}
