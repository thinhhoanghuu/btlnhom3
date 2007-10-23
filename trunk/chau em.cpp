#include<stdio.h>;
#include<conio.h>;
void dichchuyen(int n,int C1,int C2,int C3);
void main()
{
 int n;
 clrscr();
 printf(" n = ");
 scanf("%d",&n);
 printf("\n");
 dichchuyen(n,1,2,3);
 getch();
}
void dichchuyen(int n,int C1,int C2,int C3)
{
 if (n==1)
  printf("%d -> %d\n",C1,C2);
 else
   {
     dichchuyen(n-1,C1,C3,C2);
     dichchuyen(1,C1,C2,C3);
     dichchuyen(n-1,C3,C2,C1);
   }
}