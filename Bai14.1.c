#include<stdio.h>
int main(){
	char string[100]; 
	printf("Moi ban nhap vao 1 chuoi: ");
	gets(string);
	int length=strlen(string); 
	printf("Chuoi ban vua nhap la: %s\n",string);
	printf("Do dai cua chuoi la: %d\n",length);
	return 0; 
} 
