#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "E:\Bai tap lon mon EPC Aiti Aptech\class information.cpp"
/*#include "E:\Bai tap lon mon EPC Aiti Aptech\student information.cpp"
#include "E:\Bai tap lon mon EPC Aiti Aptech\mark information.cpp"*/
extern class_information a[12];
void main()
{
	int key;
   int i, j, k;
   FILE *fp;
   char str[3];
   fp=fopen("E:\\class.txt", "r");
   i=record(fp);
   fclose(fp);
   if (i>=1)
   		{
      		fp=fopen("E:\\class.txt", "r");
   			j=0;
            do
   							{
                                 	k=0;
												do
   												{
      												a[j].class_name[k]=fgetc(fp);
         											if (a[j].class_name[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[j].class_name[k]='\0';

                                    k=0;
												do
   												{
      												a[j].teacher[k]=fgetc(fp);
         											if (a[j].teacher[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[j].teacher[k]='\0';

                                    k=0;
												do
   												{
      												a[j].room_no[k]=fgetc(fp);
         											if (a[j].room_no[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[j].room_no[k]='\0';

                                 	k=0;
												do
   												{
      												a[j].time[k]=fgetc(fp);
         											if (a[j].time[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[j].time[k]='\0';

												fscanf(fp, "%s", str);
         									fscanf(fp, "\n");
                                    a[j].student_num=atoi(str);
         									j++;
                        }	while (j<i);
         		fclose(fp);
         }

   do
		{
     	   printf("\n      MENU \n");
     		printf("_______________________\n");
     		printf("\n1. Class Information");
     		printf("\n2. Student Information");
     		printf("\n3. Mark Information");
     		printf("\n4. Exit ");
     		printf("\n_______________________");

			printf("\n\n Enter your choice: ");
     		scanf("%d", &key);
         switch (key)
         	{
            	case 1 :
        				class_info();
                  break;

               /*case 2 :
        				student_info();
                  break;

     				case 3 :
        				mark_info();
                  break; */

               case 4 :
               	printf("\n Please press ENTER to exit your program.");
         		   break;

               default :
               	printf("\n Please press ENTER to check the main MENU again.\n");
         			getch();
         		   break;
            }
    	}	while(key!=4);
	getch();
}




