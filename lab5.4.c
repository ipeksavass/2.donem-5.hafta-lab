#include<stdio.h>
int main(){
	char str[50];
	int k=0;  //k uzunluk belirtiyor!
	char *ch = str;
	
	printf("bir metin giriniz:");
	gets(str);
	
	while(*ch != '\0')
	{
		k++;
		ch++;
	}
	printf("dizinin uzunlugu:%d",k);
	
	return 0;
}
