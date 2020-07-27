#include<stdio.h>
int main()
{
	int m;
	printf("Enter your marks\n");
	scanf("%d",&m);
	printf("Here's your grade\n");
	switch(m/15)
	{
			case 6: 
		printf("Grade A\nExcellent! U aced it!");
		break;
			case 5: 
		printf("Grade A\nExcellent!");
		break;
			case 4: 
		printf("Grade B\nGood!");
		break;
			case 3: 
		printf("Grade C\nCould have done better");
		break;
			case 2: 
		printf("Grade D\nPoor");
		break;
			default: 
		printf("Grade F\n FAIL");
		break;
	}
	return(0);
}
