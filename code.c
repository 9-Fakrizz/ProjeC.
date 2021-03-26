// program Array 1 ex1
#include<stdio.h>
#include<conio.h>
int main()
 {
     float a;
     float b;
     float result;
     float ang;
     int r = 0 ;
    printf("Numb 1 >> ");
    scanf("%f",&a);
    printf("Numb 2 >> ");
    scanf("%f",&b);
    printf("a = %f \n",a);
    printf("b = %f \n",b);
     //process//
     result = a/(b*2) ;
     printf("Result : %f ",result);
     ang = result * 360;
     while(ang > 360 )
     {
        ang = ang - 360 ;
        r=r+1;
     }

     printf("Round : %d \n",r);
     printf("degree : %f ",ang);
     getch();
 }
