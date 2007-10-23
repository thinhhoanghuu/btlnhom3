#include <conio.h>
#include <stdio.h>
#include <string.h>


typedef struct
{
        char Ecode[10];
        char Ename[20];
        float Price;
        char Discount[10];
                        
}thietbi;
int count1=0;


typedef struct
{
        char Cid[10];
        char Cname[20]; 
        char Ecode[10];       
        int Quantity;
        char Sub[10];
        
}khach;
int count2=0;





main()
{
      
      int key;
      thietbi tb[100];
      khach kh[100];
      
    while(1)
    {  
      printf("\n\n\t MENU");  
      printf("\n\n 1. Nhap thiet bi moi.");
      printf("\n 2. Nhap khach hang moi.");
      printf("\n 3. In hoa don chi tiet cho khach hang.");
      printf("\n 4. In danh sach khach hang duoc uu dai dac biet.");
      printf("\n 5. In danh sach tat ca khach hang.");
      printf("\n\n\t Chon 1.2.3.4.5 :");
      scanf("%d",&key);
      
       switch(key)
       {

                  case 1:
                       for(int i=count1;i<100;i++)
                       {
                       printf("\n Equipment Code :");
                       scanf("%s",tb[i].Ecode);
                       printf("\n Equipment Name :");
                       scanf("%s",tb[i].Ename);
                       printf("\n Price(1000VND) :");
                       scanf("%f",&tb[i].Price);
                       printf("\n Discount (Yes/No) :");
                       scanf("%s",tb[i].Discount);
                       
                       count1++;
                       break;
                       }
                       break;

                  case 2:
                       for(int i=count2;i<100;i++)
                       {
                       printf("\n Customer ID :");
                       scanf("%s",kh[i].Cid);
                       printf("\n Customer Name :");
                       scanf("%s",kh[i].Cname);
                       printf("\n Equipment Code :");
                       scanf("%s",kh[i].Ecode);
                       printf("\n Quantity :");
                       scanf("%d",&kh[i].Quantity);
                       printf("\n Subscriber :");
                       scanf("%s",kh[i].Sub);
                       
                       count2++;
                       break;
                       }
                       break;
                  case 3:
                       
                       
                       
                       break;           
                  case 4:
                       break;                      
                  case 5:
                       printf("\n No \t Customer Name \t Payment (1000VND)");
                        for(int i=0;i<count2;i++)
                       {
                       printf("\n %d \t %s \t ",i,kh[i].Cname,kh[i].Quantity);
                       }
                       break;
                  default:
                          printf("\n\t Nhap sai !");     
                       
       }
          
    }
      
      
      getch();
}

