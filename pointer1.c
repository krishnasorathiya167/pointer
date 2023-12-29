#include<stdio.h>

main()
{
	int n;
	
	printf("Enter Value N = ");
	scanf("%d",&n);
	int *p;
	p = &n;
	
	int square = *p * *p;
	printf("Spuare Of N = %d",square);
}