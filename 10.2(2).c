#include<stdio.h>

char string(){
	char str[100];
	printf("Enter your String :");
	gets(str);
	int count;
	while(str[count] != '\0'){
		count++;
	}
	printf("Length of String is :%d",count);
}

void main(){
	printf("Length of String is : %s",string());
}
