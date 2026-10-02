#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,k,a,b,c;
for(i=1;i<=5;i++)
{
for(j=1;j<=(5-i);j++)
{
printf("  ");
}
for(k=1;k<=(2*i-1);k++)
{
printf("⭐");
}
printf("\n");
}
for(a=4;a>=1;a--)
{
for(b=1;b<=(5-a);b++)
{
printf("  ");
}
for(c=1;c<=(2*a-1);c++)
{
printf("⭐");
}
printf("\n");
}
getch();
}