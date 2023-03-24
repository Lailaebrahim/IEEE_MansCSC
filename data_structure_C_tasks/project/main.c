#include <stdio.h>
#include <stdlib.h>
#include "Student_Data_Base.h"
#include <string.h>


int main()
{
    DataBase_t q;
    element_t Data[MAXQUEUE];

    //Queue q;
    char e[10];
    int check=0,num;
//create the queue
   DataBase_init(&q);
    do{
//take user choice
    printf("Choose one of the following options\n");
    printf("Enter 1 to Add students manually\n");
    printf("Enter 2 to Add students from file\n");
    printf("Enter 3 to Find student by ID \n");
    printf("Enter 4 to Find student by the first name \n");
    printf("Enter 5 to Find Students enrolled in one course\n");
    printf("Enter 6 to Update Student\n");
    printf("Enter 7 to Delete Student\n");
    printf("Enter 8 to View all Students\n");
    printf("Enter 9 to Print Students count\n");
    printf("Enter 10 to Exit\n");
    printf("Enter Your Option : ");


    fflush(stdin);
    scanf("%d",&num);

        if(num==1){
        //first check if the queue is full or not
        if( !QueueFull(&q)){
         Add_Student_Manually(Data,&q );
         printf("-----------------------------\n");

         }
        }


        else if(num==2){
             if( !QueueFull(&q)){
                  Add_Student_From_File(Data,&q);
                  printf("-----------------------------\n");

             }
       }

        else if(num==3){
           Find_Student_By_ID(Data,&q);
           printf("-----------------------------\n");
        }

        else if(num==4){

            Find_Student_By_FN(Data,&q);
            printf("\n---------------------------\n");}

        else if (num==5){
            Find_Students_In_Course(Data,&q);
            printf("----------------------------\n");
        }
        else if(num==6){
           Update_Student(Data,&q);
           printf("----------------------------\n");
        }
        else if(num==7){
            Delete_Student(Data,&q);
             printf("----------------------------\n");
        }
        else if (num==8){
            View_All(Data,&q);
             printf("----------------------------\n");
        }
        else if(num==9){
            int size = Print_Student_Count(&q);
            printf("Student counts is : %d \n",size);
            printf("----------------------------\n");
        }
        else if(num==10){
             printf("Exit !");
             check=1;
        }
//exit when check equal 1*/
} while(check !=1);


    return 0;
}
