#include<stdio.h>
#include<conio.h>
int main()
{   clrscr();
    int a;
    while(1)
    {printf("\nenter zero to exit:");
    scanf("%d",&a);
    switch(a)
    {
    case 0:
    printf("\nnumber is 0");
    break;
    default:
    printf("\nnumber is not 0");
    break;
    }
    if(a==0)
    {break;}
    }
    getch();
    }