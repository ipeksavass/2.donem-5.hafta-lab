#include <stdio.h>
#include <stdlib.h>
int main(){
	int s[50],i,boyut,sum=0;
	int *ptr = s;
	printf("boyut:");  scanf("%d",&boyut);
	for(i=0;i<boyut;i++){
		printf("%d eleman:",i);
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}
	printf("sum:%d",sum);
	return 0;
}
