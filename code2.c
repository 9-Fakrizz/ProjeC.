// program Array 1 ex2
#include<stdio.h>
#include<conio.h>
int main()
 {
 int i;
 float num[10];
 float price[10]={50.5,2.25,10.0};
 int a[10];
 int b[10] ={10,20,30,40,50};
 char code[10];
 char ch[10] = {'a','b','c','d','e',};
 char name1[13] ="yrc school";
 //input
 printf(" Array practice program \n");
 for(i=0;i< 10;i++)
 {
 printf("Enter num %d : ",i+1);
 scanf("%f",&num[i]);
 }
 //Display
 system("cls");
 printf(" Array practice program output \n");
 printf("price[0] = %.2f\n",price[0]);
 printf("char[0] = %c\n",ch[0]);
 for(i=0;i< 10;i++)
 printf("output num %d is : %.2f\n ",i+1,num[i]);
 getch();
 }
