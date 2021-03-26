// program Array 1 ex2
#include<stdio.h>
#include<conio.h>
int main()
 {
 int i;
 char name[20][10];
 //input
 printf(" Array practice program \n");
 for(i=0;i< 10;i++)
 {
 printf("Enter name %d : ",i+1);
 scanf("%s",&name[i]);
 }
 //Display
 system("cls");
 printf(" Array practice program output \n");
 for(i=0;i< 10;i++)

   printf("output name %d is : %.2s\n ",i+1,name[i]);


 getch();
 }
