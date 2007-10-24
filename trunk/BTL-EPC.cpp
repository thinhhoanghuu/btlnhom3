#include <conio.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
        char Name[6];
        char Teacher[50];
        char Room[50];
        char Time[50];        
        int  Student;
        
}class; 

void ClassInfo()
{
     int key;
     
     do{
     
     printf("\n\n\tClass Information");
     printf("\n____________________________");
     printf("\n1. Add New Class");
     printf("\n2. Edit Class Information");
     printf("\n3. Delete Class Information");
     printf("\n4. Class List ");
     printf("\n5. Back to Main Menu ");
     printf("\n6. Exit  ");
     printf("\n____________________________");
     
     printf("\n\n Enter your choice:");
      scanf("%d",&key);
      
            switch(key)
                 {
                       case 1 : break;
                       case 2 : break;
                       case 3 : break;
                       case 4 : break;
                       case 5 : break;
                       case 6 :
                              printf("\nPress any key to exit..."); 
                              break;
                       default : 
                               printf("\nPlease check the menu again!");
                               break;                     
                 
                 }
     
     
     
     }while(key!=6);
}

main()
{
      int key;
      
      do{
                    
      printf("\n\n\t MENU \n"); 
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
                            ClassInfo();
                            break;
                       case 2 : 
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
