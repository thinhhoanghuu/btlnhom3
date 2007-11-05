#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
	char roll_no[7];
   char full_name[50];
   char birthday[11];
   char address[50];
   char class_name[7];
}	student_information;

student_information student[12];

int i=0; /* bien nay la bien toan cuc, dung de dem so sinh vien hien co cua toan trung tam*/

void add_student()
{
     printf("\n\n\n Add New Student");
     printf("\n_______________________________________\n");
     printf(" (* Information Required) \n");
     printf("________________________________________\n");
     printf(" Roll No(*) : ");
     fflush(stdin);
     gets(student[i].roll_no);
     printf(" Full Name(*) : ");
     fflush(stdin);
     gets(student[i].full_name);
     printf(" Birthday : ");
     fflush(stdin);
     gets(student[i].birthday);
     printf(" Address : ");
     fflush(stdin);
     gets(student[i].address);
     printf(" Class(*): ");
     fflush(stdin);
     gets(student[i].class_name);

     i++; /* Tang so sinh vien len 1 */
}

void student_list()
{

     printf("\n\n\t\t\t Student List");
     printf("\n______________________________________________________________\n");
     printf("\nRoll No \t Full Name \t Class \t\t Birthday\n");
     printf("________________________________________________________________\n\n");
     for(int j=0; j<i; j++)
     		{
         	printf("%s \t\t %s \t %s \t %s\n",student[j].roll_no, student[j].full_name, student[j].class_name, student[j].birthday);
         }

}


void student_info()
{
        int key;

   do
   	{
	   	printf("\n\n\n\t Student Information");
     		printf("\n_____________________________\n");
     		printf("\n1. Add New Student");
     		printf("\n2. Edit Student Information");
     		printf("\n3. Delete Student Information");
         printf("\n4. Student List ");
     		printf("\n5. Find Student ");
     		printf("\n6. Back to Main Menu ");
     		printf("\n____________________________\n");
     		printf("\n Enter your choice: ");
     		scanf("%d", &key);

     		switch(key)
         	{
            	case 1 :
                     add_student();
                       break;

               case 2 :
                      break;

               case 3 :
                      break;

               case 4 :
                    student_list();
                     break;

               case 5 :
                     break;

               case 6 :
               	printf("\n Please press ENTER to come back the Main Menu.\n");
               	getch();
                   break;

               default :
               	printf("\n Please check the Student Information MENU again.\n");
               	getch();
                  break;
            }

      }	while(key!=6);
}


void main()
{
   int key;

      do{

      printf("\n\n\n\n\t MENU \n");
      printf("_______________________");
      printf("\n1. Class Information");
      printf("\n2. Student Information");
      printf("\n3. Mark Information");
      printf("\n4. Exit ");
      printf("\n_______________________");

      printf("\n\n Enter your choice:");
      scanf("%d",&key);

            switch(key)
                 {
                       case 1 :
                            break;
                       case 2 :
                            student_info();
                            break;
                       case 3 :
                            break;
                       case 4 :
                              printf("\nPress any key to exit...");
                              break;
                       default :
                               printf("\nPlease check the menu again!");
                               break;

                 }

      }while(key!=4);

      getch();
}
