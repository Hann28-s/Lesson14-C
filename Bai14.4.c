#include<stdio.h>
int main(){
	char fullName[]="Nguyen Manh Hung"; 
	int length=strlen(fullName);
	char ch;
	int index=0; 
	printf("Hay nhap 1 ky tu bat ki: ");
	scanf("%c",&ch); 
	for(int i=0; i<length; i++){
		if(fullName[i] == ch){
			index++;
		} 
	} 
	printf("So lan xuat hien cua '%c' la: %d",ch,index);
	return 0; 
} 
