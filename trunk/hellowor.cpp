#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,a,i,k,l;
 do
 {
	printf("\n Hay nhap vao so nguyen duong n: ");
	scanf("%d",&n);
	a=floor(sqrt(n));
	if (a*a==n)
	  break;
	else
	 {
		printf("\n So %d khong phai la so chinh phuong. Moi ban nhap lai so n!",n);
		getch();
		clrscr();
	 }
 } while(a*a!=n);
 printf("\n\n");
 k=1;
 for (i=1;i<=n;)
	{
	 l=i;
	 if (l%a==1)
	  {
		if ((k%2)!=0)
		 {
		  for (i=l;i<=l+a-1;i++)
			 printf("%3d",i);
		  printf("\n");
		 }
		else
		 {
		  for (i=l+a-1;i>=l;i--)
			 printf("%3d",i);
		  printf("\n");
		 }
		k++;
 
	  }
	 else i++;
	}

 getch();
}