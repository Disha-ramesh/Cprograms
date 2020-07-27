#include<stdio.h>
int main()
{
	int c;
	printf("Hello there!\n~Welcome to Juni cafe~\nHere's our menu:\n");
	printf("~COFFEE~\n");
	printf("1.expresso.............$3\n");
	printf("2.latte................$4\n");
	printf("3.americano............$3\n");
	printf("4.mocha................$4\n");
	printf("5.cappacino............$4\n");
	scanf("%d",&c);
	switch(c)
	{
			case 1: 
		printf("good choice!\nthat'll be $3 only~\n");
		printf("enjoy! :)");
		break;
			case 2: 
		printf("good choice!\nthat'll be $4 only~\n");
		printf("enjoy! :)");
		break;
			case 3: 
		printf("good choice!\nthat'll be $3 only~\n");
		printf("enjoy! :)");
		break;
			case 4: 
		printf("good choice!\nthat'll be $4 only~\n");
		printf("enjoy! :)");
		break;
			case 5: 
		printf("good choice!\nthat'll be $4 only~\n");
		printf("enjoy!! :)");
		break;
			default: 
		printf("i'm sorry we don't serve that here~\nWhy don't you try which is on the menu? u're gonna love it!");
		break;
	}
	return(0);
}

