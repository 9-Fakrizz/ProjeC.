/*program*/
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)
#define backgroundcolor()
void gotoxy (short x,short y)
*{
 COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
int main()
{
int num1;
int num2;
int total;
    printf("hello\n");
    printf("Num1 >>  ");
        scanf("%d\n",&num1);
    printf("Num2 >>  ");
    scanf("%d\n",&num2);
    total=num1+num2;
    printf("%d",total);
        getch();
}
