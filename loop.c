#include<stdio.h>

main() {
	
	int i = 1;
	int n,sum=1;
	
	printf("Enter Size : ");
	scanf("%d",&n);
	
	while(i<=n) {
		sum = sum*i;

		i++;
	}
	
	printf("\nSUM = %d",sum);
}
