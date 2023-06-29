#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,d;
   clrscr();
   printf("enter the value of A=");
   scanf("%d",&a);
   printf("enter the value of B=");
   scanf("%d",&b);
   printf("enter the value of C=");
   scanf("%d",&c);
   printf("enter the value of D=");
   scanf("%d",&d);
   (a>b)?(a>c)? (a>d)? printf("%d is max",a) : printf("%d is max",d) : (c>d)? printf("%d is max",c)  : printf("%d is max",d)
	:(b>c)? (b>d)? printf("%d is max",b) : printf("%d is max",d) : (c>d)? printf("%d is max",c)  : printf("%d is max",d);
   getch();


}