#include<stdio.h>
#include<conio.h>
int main()
{
   int a,sum;
   printf("enter the number:");
   scanf("%d",&a);
   sum=a/100000+(a/10000)%10+(a/1000)%10+(a/100)%10+(a/10)%10+a%10;
   printf("sum of all digits is:%d",sum);
   getch();
   }