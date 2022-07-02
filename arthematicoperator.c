#include <stdio.h>

int main(){
	int a, b;
	printf("Enter a & b");
	scanf("%d%d",&a,&b);
	printf("\nADDITION\n");
	printf("A+B : %d",a+b);
	printf("\nSUBTRACTION\n");
	printf("A-B : %d",a-b);
	printf("\nMULTIPLICATION\n");
	printf("A*B : %d",a*b);
	printf("\nDIVISION\n");
	printf("A/B : %d",a/b);
	printf("\nMODULUS\n");
	printf("\nA%B : %d",a%b);
	return 0;
}