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
    if(a<b)
    {
      if(a<c)
      {
	printf("A is minimam");
      }
      else
      {
	printf("C is minimam");
      }
    }
    else
    {
      if(b<c)
      {
	printf("B is minimam");
      }
      else
      {
	printf("C is minimam");
      }
    }
    getch();
}