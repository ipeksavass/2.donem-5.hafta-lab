#include <stdio.h>
#include <stdlib.h>
int main(){
	char eski[50];
	char yeni[50];
	int k=0;
	char *eski_p = eski;
	char *yeni_p= yeni;
	
	printf("bir metin giriniz:");
	gets(eski);	
	while(*eski_p != '\0')
	{
		k++;
		eski_p++;
	} 
	
	while(k>0)
	{
		eski_p--;
		*yeni_p = *eski_p;
		yeni_p++;
		k--;
	}
	*yeni_p = '\0';
	printf("girilen metin: %s\n",eski);
	printf("ters metin: %s\n",yeni);
	
	return 0;
}
