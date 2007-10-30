#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
        char class_name[7];
        char teacher[40];
        char room_no[15];
        char time[14];
        int student_num;
} class_information;

int record(FILE *f);
void time_slot(char ch, char *str2);
void chuan_hoa_xau(char *str);
int kiem_tra_ten_lop(char *str);
void class_info();


void main()
{
  int key;
  /*fp=fopen("E:\\class.txt", "r");
  i=record(fp);
  fclose(fp);
  if (i==0)
   {
     fp=fopen("E:\\class.txt", "a");
     fprintf(fp,  " Class List\n");
     fprintf(fp, "________________________________________________________________________________________\n\n");
     fprintf(fp, " Class Name     Head Teacher                Room No             Time Slot");
     fprintf(fp, "\n_______________________________________________________________________________________\n");
     fclose(fp);
   }*/
  do
   {
 aa: printf("\n      MENU \n");
     printf("_______________________\n");
     printf("\n1. Class Information");
     printf("\n2. Student Information");
     printf("\n3. Mark Information");
     printf("\n4. Exit ");
     printf("\n_______________________");

     printf("\n\n Enter your choice: ");
     scanf("%d",&key);
     if (key<1||key>4)
       {
         printf("\n Please check the main MENU again.\n");
         getch();
         goto aa;
       }
     if (key==4)
       {
        printf("\n Exit the program.");
        break;
       }
     if (key==1)
        class_info();
    /* if (key==2)
        student_info();
     if (key==3)
        mark_info(); */

   }while(key!=4);
  getch();
}

int record(FILE *f)
{
  int i;
  char c;
  if (f==NULL) return 0;
  else
    {
      i=0;
      do
        {
          c = fgetc(f);
          if (c=='\n') i++;
          if (c==EOF) break;
        } while (1);
      return i;
    }
}

void time_slot(char ch, char *str2)
{
 switch(ch)
  {
    case 'I':
       strcpy(str2, "13.30 - 15.30");
       break;
    case 'G':
       strcpy(str2, "7.30 - 9.30");
       break;
    case 'H':
       strcpy(str2, "9.30 - 11.30");
       break;
    case 'K':
       strcpy(str2, "15.30 - 17.30");
       break;
    case 'M':
       strcpy(str2, "19.30 - 21.30");
       break;
    case 'L':
       strcpy(str2, "17.30 - 19.30");
       break;
  }
}
void chuan_hoa_xau(char *str)
{
 int i,j,n;
 n=strlen(str);
 do
   {
    if (str[0]==' ')
      {
       for (i=0;i<n-1;i++)
         str[i]=str[i+1];
       str[n-1]='\0';
       n--;
      }
   } while (str[0]==' ');
 if (str[0]>96&&str[0]<123)
   str[0]=str[0]-32;
 i=1;
 do
   {
    if (str[i]==' '&&str[i+1]==' ')
      {
       for (j=i;j<n-1;j++)
         str[j]=str[j+1];
       str[n-1]='\0';
       n--;
      }
    else i++;
   } while (i<n-1);
 if (str[n-1]==' ')
   str[--n]='\0';

 i=0;
 do
   {
    if (str[i]==' '&&str[i+1]>96&&str[i+1]<123)
      str[i+1]=str[i+1]-32;
    i++;
   } while (i<n-1);

 i=0;
 do
   {
    if (str[i]>64&&str[i]<91&&str[i+1]>64&&str[i+1]<91)
      str[i+1]=str[i+1]+32;
    if (str[i]>96&&str[i]<123&&str[i+1]>64&&str[i+1]<91)
      str[i+1]=str[i+1]+32;
    i++;
   } while (i<n-1);
}

int kiem_tra_ten_lop(char str[7])
{
 int j;
 if (strlen(str)!=6) return 0;
 if (str[0]!='C'&&str[0]!='T') return 0;
 if (str[5]!='L'&&str[5]!='G'&&str[5]!='H'&&str[5]!='I'&&str[5]!='K'&&str[5]!='M')
   return 0;
 j=1;
 do
   {
     if (str[j]<48||str[j]>57)
       {
        return 0;
        break;
       }
     else j++;
   } while (j<=4);
 return 1;
}

void class_info()
{
  class_information a[12];
  int key, i, j, n, k, m;
  FILE *fp;
  FILE *fp1;
  char ch, flag;
  do
   {
 bb: printf("\n  Class Information");
     printf("\n_____________________________\n");
     printf("\n1. Add New Class");
     printf("\n2. Edit Class Information");
     printf("\n3. Delete Class Information");
     printf("\n4. Class List ");
     printf("\n5. Back to Main Menu ");
     printf("\n____________________________\n");
     printf("\n Enter your choice: ");
     scanf("%d",&key);

     if (key<1||key>5)
       {
         printf("\n Please check the Class Information MENU again.\n");
         getch();
         goto bb;
       }

     if (key==5)
       {
        printf("\n Please press ENTER to come back the Main Menu.\n");
        getch();
        break;
       }

     if (key==1)
      {
       do
       {
        fp1=fopen("E:\\class_name.txt", "r");
        i=record(fp1);
        fclose(fp1);
        printf("\n Add New Class \n");
        printf(" (* Information Required) \n");
        printf("________________________________________\n");
        do
          {
       cc: printf(" Class Name(*): ");
           fflush(stdin);
           gets(a[i].class_name);
           k=kiem_tra_ten_lop(a[i].class_name);
           if (k==0) goto cc;
           if (i>=1)
              {
               m=0;
               fp1=fopen("E:\\class_name.txt", "r");
               do
                {
                 fscanf(fp1, "%s", a[m].class_name);
                 fscanf(fp1, "\n");
                 if (strcmp(a[m].class_name, a[i].class_name)==0) break;
                 else m++;
                } while (m<i);
               fclose(fp1);
               if (m<i)
                {
                 fclose(fp1);
                 goto cc;
                }
              }
          } while (0);
        printf(" Head Teacher(*): ");
        fflush(stdin);
        gets(a[i].teacher);
        chuan_hoa_xau(a[i].teacher);
        printf(" Room No: ");
        fflush(stdin);
        gets(a[i].room_no);
        time_slot(a[i].class_name[5], a[i].time);
        printf(" Time Slot: %s\n", a[i].time);
        do
         {
           printf(" Student Number: ");
           scanf("%d",&n);
           a[i].student_num=n;
         } while (n<3||n>12);
        printf("________________________________________\n");
        printf("\n Do you want to save (y/n): ");
        fflush(stdin);
        scanf("%c",&ch);
        if (ch=='y'||ch=='Y')
          {
           fp1=fopen("E:\\class_name.txt", "a");
           fprintf(fp1, "%s\n", a[i].class_name);
           fclose(fp1);
           fp=fopen("E:\\class.txt", "a");
           fprintf(fp, "%s", a[i].class_name);
           for (j=1;j<=10;j++)
             fputc(' ', fp);
           fprintf(fp, "%s", a[i].teacher);
           for (j=1;j<=30-strlen(a[i].teacher);j++)
             fputc(' ', fp);
           fprintf(fp, "%s", a[i].room_no);
           for (j=1;j<=24-strlen(a[i].room_no);j++)
             fputc(' ', fp);
           fprintf(fp, "%s", a[i].time);
           fputc('\n', fp);
           fclose(fp);
          }
        printf(" Do you want to continue (y/n): ");
        fflush(stdin);
        scanf("%c",&flag);
       } while (flag=='y'||flag=='Y');
      }

     if (key==2)
       {
        fp=fopen("E:\\class.txt", "r");
        i=record(fp);
        fclose(fp);
        if (i==0)
          {
           printf("\n Trong file class.txt chua co thong tin ve lop hoc nao.\n");
           printf(" Vi vay ban khong the chon chuc nang nay.\n");
           printf(" Moi ban bam ENTER de quay tro ve Class Information Menu.\n");
           getch();
           goto bb;
          }
        else break;
       }

     if (key==3)
       {
        fp=fopen("E:\\class.txt", "r");
        i=record(fp);
        fclose(fp);
        if (i==0)
          {
           printf("\n Trong file class.txt chua co thong tin ve lop hoc nao.\n");
           printf(" Vi vay ban khong the chon chuc nang nay.\n");
           printf(" Moi ban bam ENTER de quay tro ve Class Information Menu.\n");
           getch();
           goto bb;
          }
        else break;
       }

     if (key==4)
       {
        fp=fopen("E:\\class.txt", "r");
        i=record(fp);
        fclose(fp);
        if (i==0)
          {
           printf("\n Trong file class.txt chua co thong tin ve lop hoc nao.\n");
           printf(" Vi vay ban khong the chon chuc nang nay.\n");
           printf(" Moi ban bam ENTER de quay tro ve Class Information Menu.\n");
           getch();
           goto bb;
          }
        else break;
       }

   } while(key!=5);
}

