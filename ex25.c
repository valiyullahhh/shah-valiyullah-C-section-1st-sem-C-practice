#include<stdio.h>
int main()
{
        int a,b,c;
        scanf("%d\n%d\n%d",&a,&b,&c); 
        printf("%d",a+b+c);  
	int bill;
	int discount;
        printf("\nEnter bill amount:");
	scanf("%d", &bill);
        printf("\nEnter discount percentage:");
	scanf("%d", &discount);
	int afterDiscount = bill - (bill * discount / 100);
        printf("\nAfter discount your bill is: %d", afterDiscount);
	return 0;
}
