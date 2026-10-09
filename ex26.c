#include<stdio.h>
int main()
{ 
 int wt;// weight boat can withstand
 scanf("%d",&wt);
 int a;//weight of children(max 3 chidren)
 a=a*3;
 scanf("%d",&a);
 int b;//weight of adult(max 5 adult)
 scanf("%d",&b);
 b=b*5;
 if(a<=150 && b<=300){
    printf("Boat is stabe");
    }else{
     printf("Boat will drown");
    }
    return 0;
    }
