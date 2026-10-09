#include<stdio.h>
int main()
{
 int n;
  printf("Enter a number:");
  scanf("%d",&n);
  if (n % 10 == 0){
        printf("The number is divisible by 10.");
  }else if (n % 5 == 0){
        printf("The number is divisible by 5.");
  }else{
        printf("The number is neither divisible by 5 nor 10.");
  }
  return 0;
}
