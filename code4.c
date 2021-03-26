#include<stdio.h>
#include<conio.h>
int main()
 {
 int i;
 char code[5][10];
 char name[20][10];
 float b_score[10];
 float a_score[10];
 float f_score[10];
 float sum[10];
 int grade[10];

 //input
 printf(" Array practice program \n");
 for(i=0;i< 10;i++)
 {
 printf("Enter code %d : ",i+1);
 scanf("%s",&code[i]);

 printf("Enter name %d : ",i+1);
 scanf("%s",&name[i]);

 printf("Enter midtrem score %d : ",i+1);
 scanf("%f",&b_score[i]);

 printf("Enter finaltrem score %d : ",i+1);
 scanf("%f",&a_score[i]);

 printf("Enter final score %d : ",i+1);
 scanf("%f",&f_score[i]);

 sum[i]=b_score[i]+a_score[i]+f_score[i];
    if (sum[i]>=80 && sum[i]<=100)
        grade[i] = 4;
    else if(sum[i]>=70 && sum[i]<=79)
        grade[i] = 3;
    else if(sum[i]>=60 && sum[i]<=69)
        grade[i] = 2;
    else if(sum[i]>=50 && sum[i]<=59)
        grade[i] = 1;
    else
        grade[i] = 0;
 }
 //Display

 getch();
 }
