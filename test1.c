#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char stu[30][10];

for (i=0;i<10;i++)
    {
        printf("Input Name %d >> ",i+1);
            scanf("%s",&stu[i]);
    }
    printf("ALL NAME\n");
for (i=0;i<10;i++)
    {
        printf("Name %d : %s \n",i+1,stu[i]);
    }

    getch();
}
