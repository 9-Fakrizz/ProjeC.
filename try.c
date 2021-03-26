// sort augson
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;
    int e=1;
    int nub0=0;
    char vol1,vol2;
    char word [5];

    printf("input >> ");
    scanf("%s",&word);

    for (n=0;n<4;n++)
{
        for (i=0;i<4;i++)
        {

        if(word[i]>word[i+1])
            {
            vol1 = word[i];
            word[i]=word[i+1];
            word[i+1]=vol1;
            }
        else if(word[i]<'a')
            {
            nub0=nub0+1;
            }

        }
        e=e+1;
}
        printf("_count e == %d \n",e);
        printf(" Nub0 >> %d \n",nub0);
    for (i=0;i<e;i++)
    {

       printf("word %d : %c  \n",i+1,word[i]);
    }
    getch();
}
