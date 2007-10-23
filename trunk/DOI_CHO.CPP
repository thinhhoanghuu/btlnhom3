#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
void main()
{
 int x,y;
 clrscr();
 printf("Nhap vao gia tri 2 so\n");
 printf("x =");
 scanf("%d",&x);
 printf("y =");
 scanf("%d",&y);
 printf("\nTruoc khi goi swap\n");
 printf("%4d %4d\n",x,y);
 swap(&x,&y);
 printf("\nSau khi goi swap\n");
 printf("%4d %4d\n",x,y);
 getch();
}

void swap(int *a,int *b)
{
 int temp=*a;
 printf("\nTruoc khi hoan vi\n");
 printf("%4d %4d\n",*a,*b);

 *a=*b;
 *b=temp;
 printf("\nSau khi hoan vi\n");
 printf("%4d %4d\n",*a,*b);
}