#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b, int *c){
	int temp;
	temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int main(){
	int x1,x2,x3;
	printf("sayi-1:");  scanf("%d",&x1);
	printf("sayi-2:");  scanf("%d",&x2);
	printf("sayi-3:");  scanf("%d",&x3);
	
	swap(&x1,&x2,&x3);
	printf("<----------------------->\n");
	
	printf("sayi-1:%d\n",x1);
	printf("sayi-2:%d\n",x2);
	printf("sayi-3:%d\n",x3);
	
	return 0;
}
