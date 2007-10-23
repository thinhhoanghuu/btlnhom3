#include <stdio.h>
#include <conio.h>

struct so_phuc
{
 int x;
 int y;
};

so_phuc tong(so_phuc ,so_phuc);
void insp(so_phuc);
void main()
{
 struct so_phuc a,b;
 printf("\n Nhap vao gia tri cac thanh phan cua so phuc thu nhat: ");
 scanf("%d  %d",&a.x,&a.y);
 printf("\n Nhap vao gia tri cac thanh phan cua so phuc thu hai: ");
 scanf("%d  %d",&b.x,&b.y);
 printf("\n Ta co: a = ");
 insp(a);
 printf("      b = ");
 insp(b);
 printf("\n\n Tong cua hai so phuc a va b la: ");
 insp(tong(a,b));
 getch();
}

so_phuc tong(so_phuc u,so_phuc v)
{
 so_phuc t;
 t.x=u.x+v.x;
 t.y=u.y+v.y;
 return t;
}

void insp(so_phuc u)
{
 if (u.x<0&&u.y<0)
   printf("(%d) + i*(%d)",u.x,u.y);
 if (u.x<0&&u.y>=0)
   printf("(%d) + i*%d",u.x,u.y);
 if (u.x>=0&&u.y<0)
   printf("%d + i*(%d)",u.x,u.y);
 if (u.x>=0&&u.y>=0)
   printf("%d + i*%d",u.x,u.y);
 return;
}


