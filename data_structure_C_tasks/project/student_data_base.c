#include "Student_Data_Base.h"
#include <stdio.h>

//Function to create empty queue
void DataBase_init(DataBase_t *pq)
{
    pq->front=0;
    pq->rear=-1;
    pq->size=0;
}

//Function to check if the queue is full return 1 else return 0
int QueueFull(DataBase_t *pq)
{
    return pq->size==MAXQUEUE ;

}

void Add_Student_Manually(element_t *Data,DataBase_t *pq)
{
    int s,id, check=0 ;
    printf("------------------------\n");
    printf("Add Students Details \n");
    printf("------------------------\n");
    printf("Enter the Roll Number : ");
    scanf("%d",& id);
    for(s=0; s< pq->size ; s++)
    {
        if(Data[s].ID ==id)
        {
            check = 1;
            printf("Error : Roll Number %d is already taken !\n",id);
            break;
        }
    }
    if(check == 0)
    {
        Data[pq->size].ID = id;
        printf("Enter the First Name of the student : ");
        fflush(stdin);
        gets(Data[pq->size].FName);
        printf("Enter the Last Name of the student : ");
        fflush(stdin);
        scanf("%s",& Data[pq->size].LName);
        printf("Enter the GPA you obtained : ");
        fflush(stdin);
        scanf("%f",&Data[pq->size].GPA);
        printf("Enter the course Id of Each Course \n");
        printf("Course 1 id : ");
        fflush(stdin);
        scanf("%d",& Data[pq->size].course_id[0]);
        printf("Course 2 id : ");
        fflush(stdin);
        scanf("%d",& Data[pq->size].course_id[1]);
        printf("Course 3 id : ");
        fflush(stdin);
        scanf("%d",& Data[pq->size].course_id[2]);
        printf("Course 4 id : ");
        fflush(stdin);
        scanf("%d",& Data[pq->size].course_id[3]);
        printf("Course 5 id : ");
        fflush(stdin);
        scanf("%d",& Data[pq->size].course_id[4]);
        pq->rear=(pq->rear+1) % MAXQUEUE;
        pq->size++;
        pq->students_no++;
        printf("Student Details is added Successfully !\n");
    }
}

//Function to Add students from file
void Add_Student_From_File(element_t *Data,DataBase_t *pq)
{
    int s,pos,id,check=0;
    FILE *file=fopen("text.txt","r");

    for (int j=0; j<3; j++)
    {
        check=0;
        fscanf(file,"%d",&id);

        for(pos=pq->front,s=0; s< pq->size ; s++)
        {

            if(Data[s].ID ==id)
            {
                check=1;
                printf("Error : Roll Number %d is already taken !\n",id);
                break;
            }
        }
        if(check==0)
        {
            Data[pq->size].ID= id;
            fscanf(file,"%s %s %f %d ",Data[pq->size].FName,Data[pq->size].LName,&Data[pq->size].GPA,&Data[pq->size].course_id[0]);
            fscanf(file,"%d %d %d %d \n",&Data[pq->size].course_id[1],&Data[pq->size].course_id[2],&Data[pq->size].course_id[3],&Data[pq->size].course_id[4]);
            pq->rear=(pq->rear+1) % MAXQUEUE;
            pq->size++;
            pq->students_no++;
            printf("Roll Number %d added Successfully !\n",id);
        }

    }
    fclose(file);



}
//Function to find students by ID
void Find_Student_By_ID(element_t *Data,DataBase_t *pq)
{
    int id,pos,s,check=0;
    printf("Enter the Roll Number of the student : \n");
    fflush(stdin);
    scanf("%d",&id);
    printf("-------------------------\n");
    for(pos=pq->front,s=0; s< pq->size ; s++)
    {
        if(Data[s].ID ==id)
        {
            printf("The Students Details are \n");
            printf("The First Name is : %s\n",Data[s].FName);
            printf("The Last Name is : %s\n",Data[s].LName);
            printf("The Roll Number is : %d\n",Data[s].ID);
            printf("The GPA is : %f\n",Data[s].GPA);
            printf("Course 1 id : %d\n",Data[s].course_id[0]);
            printf("Course 2 id : %d\n",Data[s].course_id[1]);
            printf("Course 3 id : %d\n",Data[s].course_id[2]);
            printf("Course 4 id : %d\n",Data[s].course_id[3]);
            printf("Course 5 id : %d\n",Data[s].course_id[4]);
            check=1;
            break;
        }
    }
    if(check==0)
    {
        printf("Student ID not found !\n");

    }
}
//Function to find students by first name
void Find_Student_By_FN(element_t *Data,DataBase_t *pq)
{
    char FN[40];
    int pos,s,check=0;
    printf("Enter the First Name of the student : \n");
    fflush(stdin);
    scanf("%s",FN);
    printf("-------------------------\n");
    for(pos=pq->front,s=0; s< pq->size ; s++)
    {
        if( strcmp(Data[s].FName,FN)==0)
        {

            printf("The Students Details are \n");
            printf("The First Name is : %s\n",Data[s].FName);
            printf("The Last Name is : %s\n",Data[s].LName);
            printf("The Roll Number is : %d\n",Data[s].ID);
            printf("The GPA is : %f\n",Data[s].GPA);
            printf("Course 1 id : %d\n",Data[s].course_id[0]);
            printf("Course 2 id : %d\n",Data[s].course_id[1]);
            printf("Course 3 id : %d\n",Data[s].course_id[2]);
            printf("Course 4 id : %d\n",Data[s].course_id[3]);
            printf("Course 5 id : %d\n",Data[s].course_id[4]);
            check=1;
            break;
        }
    }
    if(check==0)
    {
        printf("Student Name not found !\n");

    }

}
//Function to Find students in the same course (choose the same course id)
void Find_Students_In_Course(element_t *Data,DataBase_t *pq)
{
    int c_id,pos,s,j,check=0;
    printf("Enter the Course ID : \n");
    fflush(stdin);
    scanf("%d",&c_id);
    printf("-------------------------\n");
//We will check the 5 courses id for each student first then we will go to the next student
    for(pos=pq->front,s=0; s< pq->size ; s++)
    {
        for(j=0; j<5; j++)
        {
            if(Data[s].course_id[j] ==c_id )
            {

                printf("\nThe Students Details are \n");
                printf("The First Name is : %s\n",Data[s].FName);
                printf("The Last Name is : %s\n",Data[s].LName);
                printf("The Roll Number is : %d\n",Data[s].ID);
                printf("The GPA is : %f\n",Data[s].GPA);
                check=1;
                break;

            }

        }
    }
    if(check==0)
    {
        printf("There is no students in his course !\n");
    }
}

//Function to return student numbers
int Print_Student_Count(DataBase_t *pq)
{
    return pq->students_no ;
}


void View_All(element_t *Data,DataBase_t *pq)
{
    unsigned char i;
    if(0 == pq->students_no || 0 == pq->size)
    {
        printf("There are no students in the database !\n");
    }
    else
    {
        for(i=0 ; i<pq->size ; i++)
        {
            if( -1 == Data[i].ID)
            {
                continue;
            }
            else
            {
                printf("\nThe Student Details are \n");
                printf("The First Name is : %s\n",Data[i].FName);
                printf("The Last Name is : %s\n",Data[i].LName);
                printf("The Roll Number is : %d\n",Data[i].ID);
                printf("The GPA is : %f\n",Data[i].GPA);
            }
        }
    }
}

void Delete_Student(element_t *Data,DataBase_t *pq)
{
    int search_roll,s,check=0;
    printf("Enter the Roll Number : \n");
    fflush(stdin);
    scanf("%d",&search_roll);
    for(s=0; s< pq->size ; s++)
    {
        if(Data[s].ID == search_roll)
        {
            if( s == pq->front)
            {
                Data[s].ID = -1;
                Data[s].GPA = -1;
                Data[s].course_id[0] = -1;
                Data[s].course_id[1] = -1;
                Data[s].course_id[2] = -1;
                Data[s].course_id[3] = -1;
                Data[s].course_id[4] = -1;
                pq->students_no--;
                pq->front = (pq->front + 1) % MAXQUEUE;
                pq->size--;
                check = 1;
                printf("Student deleted from the database successfully!\n");
            }
            else
            {
                Data[s].ID = -1;
                Data[s].GPA = -1;
                Data[s].course_id[0] = -1;
                Data[s].course_id[1] = -1;
                Data[s].course_id[2] = -1;
                Data[s].course_id[3] = -1;
                Data[s].course_id[4] = -1;
                pq->students_no--;
                check = 1;
                printf("Student deleted from the database successfully!\n");
            }
        }
        if(check==0)
        {
            printf("The Roll Number is not in the database !\n");

        }
    }
}

void Update_Student(element_t *Data,DataBase_t *pq)
{
    int search_roll,choice,s,check=0;
    printf("Enter the Roll Number : \n");
    fflush(stdin);
    scanf("%d",&search_roll);
    for(s=0; s< pq->size ; s++)
    {
        if(Data[s].ID ==search_roll)
        {
            check = 1;
            printf("Choose data to update\n");
            printf("1.First Name\n2.Last Name\n3.GPA\n4.Course ID\n");
            printf("Enter your choice : ");
            scanf("%d",&choice);
            switch (choice)
            {
            case 1:
                printf("Enter the new First Name : ");
                fflush(stdin);
                scanf("%s",Data[s].FName);
                printf("UPDATED SUCCESSFULLY.\n");
                break;
            case 2:
                printf("Enter the new Last Name : ");
                fflush(stdin);
                scanf("%s",Data[s].LName);
                printf("UPDATED SUCCESSFULLY.\n");
                break;
            case 3:
                printf("Enter the new GPA : ");
                fflush(stdin);
                scanf("%f",&Data[s].GPA);
                printf("UPDATED SUCCESSFULLY.\n");
                break;
            case 4:
                printf("Enter the new Course ID : ");
                fflush(stdin);
                scanf("%d",&Data[s].course_id[0]);
                scanf("%d",&Data[s].course_id[1]);
                scanf("%d",&Data[s].course_id[2]);
                scanf("%d",&Data[s].course_id[3]);
                scanf("%d",&Data[s].course_id[4]);
                printf("UPDATED SUCCESSFULLY.\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
            }
        }
    }
    if(check==0)
    {
        printf("Invalid Roll Number\n");
    }

}




