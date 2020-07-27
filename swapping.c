#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter two numbers \n");
	scanf("%d%d",&a,&b);
	printf("before swapping \na=%d \t b=%d\n",a,b);
	a=(a+b);
	b=(a-b);
	a=(a-b);
	printf("after swapping \na=%d \t b=%d",a,b);
}
