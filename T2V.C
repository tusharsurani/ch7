#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   printf("enter the value of A=");
   scanf("%d",&a);
   printf("enter the value of B=");
   scanf("%d",&b);
   (a>b)? printf("%d is max",a) : printf("%d is max",b);
   getch();

}