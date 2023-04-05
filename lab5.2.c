#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y;
	printf("iki sayi giriniz:");
	scanf("%d %d",&x,&y);
	int *xP=&x, *yP=&y;
	printf("result:%d",*xP + *yP);
	return 0;
	
}
