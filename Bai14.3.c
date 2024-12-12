#include<stdio.h>
 int main(){
 	char text[100];
 	int length;
	char string[100]; 
 	printf("Hay nhap 1 chuoi: ");
	fgets(text,100,stdin);
	printf("Chuoi cua ban la: %s",text);
	length=strlen(text);
	for(int i=length-1; i>=0; i--){
		putchar(text[i]); 
	} 
	
	return 0; 
 } 
