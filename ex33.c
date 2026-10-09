#include <stdio.h>
int main()
{
  int a;
  printf("Enter Mark Percentage:");
  scanf("%d",&a);
  if (a>=90 && a<=100){
     printf("Grade:o");
  }else if (a>=80 && a<=90){
     printf("Grade:A+");
  }else if (a>=70 && a<80){ 
     printf("Grade:A");
  }else if (a>=60 && a<70){ 
     printf("Grade:B");
  }else if (a>=50 && a<60){ 
     printf("Grade:C");
  }else if (a>=30 && a<50){ 
     printf("Grade:D");
  }else if (a>=15 && a<30){ 
     printf("Grade:E");
  }else if (a>=0 && a<15){ 
     printf("Grade:F");
  }  
    return 0;
}
