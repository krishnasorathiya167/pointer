#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter value Of A = ");
	scanf("%d",&a);
	printf("Enter value Of B = ");
	scanf("%d",&b);
	int *p1 , *p2;
	
	p1=&a;
	p2=&b;
	
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    
    printf("\nSwapping Value Of A and B :- \n\n");
    
    printf("Value Of A = %u = %d\n",p1,*p1);
    printf("Value Of B = %u = %d",p2,*p2);
}