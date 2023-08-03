#include<stdio.h>

main()
{
	char a[] = "Hello";
	char *p;
	
	p = &a;
	int i;
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%u => %c\n",p+i,*(p+i));
	}
//	printf("%u => %c\n",p,*p);
//	printf("%u => %c\n",p+0,*(p+0));
//	printf("%u => %c\n",p+1,*(p+1));
//	printf("%u => %c\n",p+2,*(p+2));
//	printf("%u => %c\n",p+3,*(p+3));
//	printf("%u => %c\n",p+4,*(p+4));
}

