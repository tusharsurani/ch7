
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
     if(a>b)
     {
	 if(a>c)
	 {
	    if(a>d)
	    {
	       printf("A is max");
	    }
	    else
	    {
	       printf("D is max");
	    }
	 }
	 else
	 {
	    if(c>d)
	    {
	       printf("C is max");
	    }
	    else
	    {
	       printf("D is max");
	    }

	 }
     }
     else
     {
	 if(b>c)
	 {
	    if(b>d)
	    {
	       printf("B is max");
	    }
	    else
	    {
	       printf("D is max");
	    }
	 }
	 else
	 {
	    if(c>d)
	    {
	       printf("C is max");
	    }
	    else
	    {
	       printf("D is max");
	    }
	 }
     }
     getch();

}