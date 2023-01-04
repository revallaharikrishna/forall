#include<stdio.h>
void printline(void);
void main()
{
	printline();
	printf("i am Harry\n");
	printline();
}
void printline(void)
{
	int i;
	for(i=0;i<15;i++)
	printf("-");
	printf("\n");
}

