#include <stdio.h>
int main()
{
  int a;
  printf("Enter marks:");
  scanf("%d",&a);
  if ( a>=34){
     printf("Pass");
  }else if (a<34){
     printf("Fail");
  }
    return 0;
}
