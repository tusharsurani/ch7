#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("enter the value of A=");
   scanf("%d",&a);
   printf("enter the value of B=");
   scanf("%d",&b);
   printf("enter the value of C=");
   scanf("%d",&c);
   (a>b)?(a>c)? printf("%d is max",a) : printf("%d is max",c)
	:(b>c)? printf("%d is max",b) : printf("%d is max",c);
   getch();

}