#include <stdio.h>
#include <stdlib.h>
int main(){
	int s[20],n,i;
	int *ptr;
	ptr = s;
	printf("dizi kac elemanli olsun:");
	scanf("%d",&n);
	
	for (i=0;i<n;i++){
		printf("dizinin %d. elemanini yazin:",i);
		scanf("%d",ptr+i);
	}
	printf("-----------------------\n");

	for(i=0;i<n;i++){
		printf("dizinin %d. elemani:%d\n",i,*(ptr+i));
	}
	return 0;
}
