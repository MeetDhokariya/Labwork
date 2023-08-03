#include<stdio.h>
/*
  pointer with udf
  
  call by value 
  call by refrence


*/
swap(int *p,int *p1)
{
	int temp;
	temp = *p;
	*p = *p1;
	*p1 = temp;
	
	printf("Swapping Value A = %d\n",*p);
	printf("Swapping Value B = %d\n",*p1);
}

main()
{
	int a , b;
	printf("Enter Value A =");
	scanf("%d",&a);
	printf("Enter Value B =");
	scanf("%d",&b);
	swap(&a,&b);	
	
}
