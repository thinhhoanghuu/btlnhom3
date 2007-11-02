#include "E:\Bai tap lon mon EPC Aiti Aptech\cac cau truc va bien toan cuc.cpp"
#include "E:\Bai tap lon mon EPC Aiti Aptech\tat ca cac ham con.cpp"
class_information a[12];

void add_class()
{
	int i, n, k, m;
   FILE *fp;
   char ch, flag;

   			do
      				{
                        fp=fopen("E:\\class.txt", "r");
               			i=record(fp);
               			fclose(fp);

                        printf("\n_______________________________________\n");
        						printf("\n Add New Class \n");
        						printf(" (* Information Required) \n");
        						printf("________________________________________\n");
                        getch();
                   aa:	printf(" Class Name(*): ");
                   		fflush(stdin);
                        gets(a[i].class_name);
                   		k=kiem_tra_ten_lop(a[i].class_name);
                        if (k==0) goto aa;
                        if (i>=1)
                        	{
                           	m=0;
                              do
                              	{
                                 	if (strcmp(a[m].class_name, a[i].class_name)==0) break;
                                    else m++;
                                 }	while (m<i);

                              if (m<i)
                              	{
                                   goto aa;
                                 }
                           }

        						printf(" Head Teacher(*): ");
        						fflush(stdin);
        						gets(a[i].teacher);
               			chuan_hoa_xau(a[i].teacher);
        						printf(" Room No: ");
        						fflush(stdin);
        						gets(a[i].room_no);
                        chuan_hoa_xau(a[i].room_no);
        						time_slot(a[i].class_name[5], a[i].time);
        						printf(" Time Slot: %s\n", a[i].time);
        						do
         						{
           							printf(" Student Number: ");
           							scanf("%d",&n);
           							a[i].student_num=n;
         						}	while (n<3||n>13);
        						printf("________________________________________\n");
        						printf("\n Do you want to save (y/n): ");
        						fflush(stdin);
        						scanf("%c", &ch);
        						if (ch=='y' || ch=='Y')
          						{
           							fp=fopen("E:\\class.txt", "a");
                              fprintf(fp, "%s", a[i].class_name);
   									fputc('#', fp);
                              fprintf(fp, "%s", a[i].teacher);
   									fputc('#', fp);
   									fprintf(fp, "%s", a[i].room_no);
   									fputc('#', fp);
   									fprintf(fp, "%s", a[i].time);
                              fputc('#', fp);
                              fprintf(fp, "%d", a[i].student_num);
   									fputc('\n', fp);
                              fclose(fp);

                              /*fp=fopen("E:\\class.txt", "r");
   											k=0;
												do
   												{
      												a[i].class_name[k]=fgetc(fp);
         											if (a[i].class_name[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[i].class_name[k]='\0';

                                    k=0;
												do
   												{
      												a[i].teacher[k]=fgetc(fp);
         											if (a[i].teacher[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[i].teacher[k]='\0';

                                    k=0;
												do
   												{
      												a[i].room_no[k]=fgetc(fp);
         											if (a[i].room_no[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[i].room_no[k]='\0';

                                 	k=0;
												do
   												{
      												a[i].time[k]=fgetc(fp);
         											if (a[i].time[k]=='#')	break;
                                          else k++;
      											}	while (1);
      										a[i].time[k]='\0';


												fscanf(fp, "%s", str);
         									fscanf(fp, "\n");
                                    a[i].student_num=atoi(str);
         						  	fclose(fp);   */

                           }
        						printf(" Do you want to continue (y/n): ");
        						fflush(stdin);
               			scanf("%c", &flag);
                   }	while (flag=='y' || flag=='Y');
}

void edit_class()
{
	int i, n, k, m;
   FILE *fp;
  	char ch, flag;
   char str[7];
   fp=fopen("E:\\class.txt", "r");
   i=record(fp);
   fclose(fp);
   if (i==0)
   		{
      		printf("\n Trong file class.txt chua co thong tin ve lop hoc nao.\n");
         	printf(" Vi vay ban khong the chon chuc nang nay.\n");
         	printf(" Moi ban bam ENTER de quay tro ve Class Information Menu.\n");
         	getch();
      	}
	else
   		{
      		do
      				{
                    bb: printf("\n_______________________________________\n");
                    		printf(" Edit Class Information\n");
        						printf(" (* Information Required) \n");
        						printf("________________________________________\n");
                        getch();
                    		printf(" Input Class Name: ");
                   		fflush(stdin);
                        gets(str);
                        k=kiem_tra_ten_lop(str);
                        if (k==0)
                        	{
                           	printf("\n Khong tim thay lop nao co ten nhu vay.");
                              printf("\n\n Do you want to continue (y/n): ");
                              fflush(stdin);
                              scanf("%c", &flag);
                              if (flag=='y'||flag=='Y') goto bb;
                              else break;
                           }
                        m=0;
                        do
                        	{
                           	if (strcmp(a[m].class_name, str)==0) break;
                              else m++;
                           }	while (m<i);
                        if (m==i)
                        	{
                           	printf("\n Khong tim thay lop nao co ten nhu vay.");
                              printf("\n\n Do you want to continue (y/n): ");
                              fflush(stdin);
                              scanf("%c", &flag);
                              if (flag=='y'||flag=='Y') goto bb;
                              else break;
                           }

                        printf("________________________________________\n");

        						printf(" Head Teacher(*): %s", a[m].teacher);
                        printf("\n Room No: %s", a[m].room_no);
                        printf("\n Time Slot: %s", a[m].time);
                        printf("\n Student Number: %d", a[m].student_num);
                        printf("\n________________________________________\n");
                        getch();
                        printf(" Do you want to edit Head Teacher (y/n): ");
                        fflush(stdin);
                        scanf("%c", &ch);
                        if (ch=='y'||ch=='Y')
                           {
                        		printf(" Input Head Teacher(*): ");
                              fflush(stdin);
                              gets(a[m].teacher);
                           }
               			chuan_hoa_xau(a[m].teacher);
        						printf(" Do you want to edit Room No (y/n): ");
                        fflush(stdin);
                        scanf("%c", &ch);
                        if (ch=='y'||ch=='Y')
                           {
                        		printf(" Input Room No: ");
                              fflush(stdin);
                              gets(a[m].room_no);
                           }
               			chuan_hoa_xau(a[m].room_no);
        						printf(" Time Slot (Cannot Changed): %s\n", a[m].time);
                        getch();
        						printf(" Do you want to edit Student Number (y/n): ");
                        fflush(stdin);
                        scanf("%c", &ch);
                        if (ch=='y'||ch=='Y')
                           {
                        		do
                                 {
                              		printf(" Input Student Number: ");
                              		scanf("%d", &n);
                              		a[m].student_num=n;
                                 }  while (n<3||n>13);
         						}
        						printf("________________________________________\n");
                        getch();
        						printf("\n Do you want to save (y/n): ");
        						fflush(stdin);
        						scanf("%c", &ch);
        						if (ch=='y' || ch=='Y')
          						{
                              fp=fopen("E:\\class.txt", "w");
                              for (k=0; k<i; k++)
                              	{
           						 			fprintf(fp, "%s", a[k].class_name);
   											fputc('#', fp);
                              		fprintf(fp, "%s", a[k].teacher);
   											fputc('#', fp);
   											fprintf(fp, "%s", a[k].room_no);
   											fputc('#', fp);
   											fprintf(fp, "%s", a[k].time);
                              		fputc('#', fp);
                              		fprintf(fp, "%d", a[k].student_num);
   											fputc('\n', fp);
                              	}
                              fclose(fp);
                           }
        						printf(" Do you want to continue (y/n): ");
        						fflush(stdin);
               			scanf("%c", &flag);
                   }	while (flag=='y' || flag=='Y');
         }
}

void delete_class()
{
	int i, n, k, m;
   FILE *fp;
  	char ch, flag;
   char str[7];
cc:fp=fopen("E:\\class.txt", "r");
   i=record(fp);
   fclose(fp);
	if (i==0)
   		{
      		printf("\n Trong file class.txt chua co thong tin ve lop hoc nao.\n");
         	printf(" Vi vay ban khong the chon chuc nang nay.\n");
         	printf(" Moi ban bam ENTER de quay tro ve Class Information Menu.\n");
         	getch();
      	}
	else
   		{
         	do
              	  {
                    bb: printf("\n_______________________________________\n");
        						printf(" Delete Class Information\n");
        						printf("________________________________________\n");
                        getch();
                    		printf(" Input Class Name: ");
                   		fflush(stdin);
                        gets(str);
                        k=kiem_tra_ten_lop(str);
                        if (k==0)
                        	{
                           	printf("\n Khong tim thay lop nao co ten nhu vay.");
                              printf("\n\n Do you want to continue (y/n): ");
                              fflush(stdin);
                              scanf("%c", &flag);
                              if (flag=='y'||flag=='Y') goto bb;
                              else break;
                           }
                        m=0;
                        do
                        	{
                           	if (strcmp(a[m].class_name, str)==0) break;
                              else m++;
                           }	while (m<i);
                        if (m==i)
                        	{
                           	printf("\n Khong tim thay lop nao co ten nhu vay.");
                              printf("\n\n Do you want to continue (y/n): ");
                              fflush(stdin);
                              scanf("%c", &flag);
                              if (flag=='y'||flag=='Y') goto bb;
                              else break;
                           }

                        printf("________________________________________\n");

        						printf(" Head Teacher(*): %s", a[m].teacher);
                        printf("\n Room No: %s", a[m].room_no);
                        printf("\n Time Slot: %s", a[m].time);
                        printf("\n Student Number: %d", a[m].student_num);
                        printf("\n________________________________________\n");
                        getch();
                        printf(" Do you want to delete (y/n): ");
                        fflush(stdin);
                        scanf("%c", &ch);
                        if (ch=='y' || ch=='Y')
                        	{
                              if (i==1)
                              	{
                                 	fp=fopen("E:\\class.txt", "w");
                                    fclose(fp);
                                 }
                              if (i>=2)
                              	{
                              		if (m == (i-1))
                              			{
                                 			fp=fopen("E:\\class.txt", "w");
                              				for (k=0; k<i-1; k++)
                              					{
           						 							fprintf(fp, "%s", a[k].class_name);
   															fputc('#', fp);
                              						fprintf(fp, "%s", a[k].teacher);
   															fputc('#', fp);
                                          		fprintf(fp, "%s", a[k].room_no);
   															fputc('#', fp);
   															fprintf(fp, "%s", a[k].time);
                              						fputc('#', fp);
                              						fprintf(fp, "%d", a[k].student_num);
   															fputc('\n', fp);
                              					}
                                          fclose(fp);
                                       }
                                    else
                                    	{
                              				for (k=m; k<i; k++)
                                          	a[k]=a[k+1];
                                          i--;
                                          fp=fopen("E:\\class.txt", "w");
                              				for (k=0; k<i; k++)
                              					{
           						 							fprintf(fp, "%s", a[k].class_name);
   															fputc('#', fp);
                              						fprintf(fp, "%s", a[k].teacher);
   															fputc('#', fp);
   															fprintf(fp, "%s", a[k].room_no);
   															fputc('#', fp);
   															fprintf(fp, "%s", a[k].time);
                              						fputc('#', fp);
                              						fprintf(fp, "%d", a[k].student_num);
   															fputc('\n', fp);
                              					}
                              				fclose(fp);
                                    	}
                                 }
                           }
                        printf(" Do you want to continue (y/n): ");
        						fflush(stdin);
               			scanf("%c", &flag);
                    		if (flag=='y' || flag=='Y') goto cc;
         			}	while (flag=='y'||flag=='Y');
         }
}

void class_list()
{
					FILE *fp;
               int i, j, k;
               class_information temp;
               fp=fopen("E:\\class.txt", "r");
               i=record(fp);
        			fclose(fp);
        			if (i==0)
          				{
                  		printf("\n Trong file class.txt chua co thong tin ve lop hoc nao.\n");
           					printf(" Vi vay ban khong the chon chuc nang nay.\n");
           					printf(" Moi ban bam ENTER de quay tro ve Class Information Menu.\n");
           					getch();
                  	}
        			else
               		{

                           for (j=0; j<i-1; j++)
                  				{
               						for (k=j+1; k<i; k++)
                  						{
                     						if (strcmp(a[j].class_name, a[k].class_name) > 0)
           											{
                                            temp=a[j];
                                            a[j]=a[k];
                                            a[k]=temp;
                           					}
                     					}
                  				}

                  			printf("\n\n_______________________________________________________________________________\n\n");
               				printf(" Class List\n");
     								printf("_______________________________________________________________________________\n\n");
               				printf(" Class Name     Head Teacher             Room No             Time Slot\n");
     								printf("_______________________________________________________________________________\n\n");

               				for (j=0; j<i; j++)
               					{
                  					printf(" %s", a[j].class_name);
                   					for (k=1; k<= 15-strlen(a[j].class_name); k++)
                   						printf(" ");

                   					printf("%s", a[j].teacher);
                   					for (k=1; k<= 25-strlen(a[j].teacher); k++)
                   					printf(" ");

                   					printf("%s", a[j].room_no);
                   					for (k=1; k<= 20-strlen(a[j].room_no); k++)
                   					printf(" ");

                   					printf("%s\n", a[j].time);
                              }
               				printf("_______________________________________________________________________________\n\n");
                           getch();

                 		}

}

void class_info()
{
	int key;

   do
   	{
	   	printf("\n  Class Information");
     		printf("\n_____________________________\n");
     		printf("\n1. Add New Class");
     		printf("\n2. Edit Class Information");
     		printf("\n3. Delete Class Information");
         printf("\n4. Class List ");
     		printf("\n5. Back to Main Menu ");
     		printf("\n____________________________\n");
     		printf("\n Enter your choice: ");
     		scanf("%d", &key);

     		switch(key)
         	{
            	case 1 :
               	add_class();
                  break;

               case 2 :
       				edit_class();
            		break;

               case 3 :
                  delete_class();
                  break;

               case 4 :
                  class_list();
                  break;

               case 5 :
               	printf("\n Please press ENTER to come back the Main Menu.\n");
                  getch();
                  break;

               default :
               	printf("\n Please check the Class Information MENU again.\n");
                  getch();
                  break;
            }

      }	while(key!=5);
}

