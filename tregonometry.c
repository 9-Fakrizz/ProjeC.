#include<stdio.h>
#include<conio.h>

int main()
{
   float a ;
    int a1 ;
   int total;
   float b ;
    int b1 ;
   float result;
   float ang;


    printf("Input Numb a >> ");
        scanf("%d",&a1);
        scanf("%f",&a);
    printf("Input Numb b >> ");
        scanf("%d",&b1);
        scanf("%f",&b);
        getch();
        //process//
   total = a1/(b1*2);
   printf(" total : %d",total);
   result = a/(b*2);
   printf(" result : %f \n",result);
   result = result - total;
   ang = result * 360 ;
   printf("angel : %f \n",ang);
   getch();
}
