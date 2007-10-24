#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
void main(void)
{
 int m,n;
 double **ppd;
 int i,j;
 double temp;

 clrscr();

 printf("Kich thuoc cua ma tran la:");
 scanf("%d %d",&m,&n);
 ppd = (double **) calloc(m,sizeof(double *));
 for (i=0; i<m; i++)
   ppd[i] = (double *) calloc(n,sizeof(double));
 for (i=0; i<m; i++)
   for (j=0; j<n; j++)
    {printf("ppd[%d,%d]",i,j);
     scanf("%lf",&temp);
     ppd[i][j]=temp;
    }
 printf("\n");
 for (i=0; i<m; i++)
  {
   for (j=0; j<n; j++)
    printf("%6.2f",ppd[i][j]);
   printf("\n");
  }
 for (i=0; i<m; i++)
  free(ppd[i]);
 free(ppd);
 getch();
}