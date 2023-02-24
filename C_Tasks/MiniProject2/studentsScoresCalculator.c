/**
 ******************************************************************************
 * @file           : studentsScoresCalculator.c
 * @author         : Laila Ebrahim
 * @brief          : a program that allows the user to enter students' names followed by their test scores.
                     The program shall output the following (assume that a maximum number of students is 20):
                     •The average score.
                     • Names of all the students whose test scores are below the average, with an appropriate warning message.
                     •Highest test score.
                     • Name of the top student, with an appreciation message.


 ******************************************************************************
 */
/* ********************** Includes Section Start ********************** */
#include <stdio.h>
#include <stdlib.h>

/* ********************** Includes Section End   ********************** */


/* ********************** definition Section End   ********************** */

#define Max 50
struct StudentInfo{ /* creating a struct to represent each student */
char name[Max];
int score ;
};

/* ********************** definition Section Start ******* */


/* ********************** Sub-Program Declarations Section Start ******* */

void SortList(struct StudentInfo StudentList[20]); /* a bubble sort function to sort listof students depending on score */
float Average(struct StudentInfo StudentList[20]); /* function to find average grade */
int HighestScore(struct StudentInfo StudentList[20]); /* function to find highest score */
void TopStudents(struct StudentInfo StudentList[20]); /* function to find top 5 students */
void StudentsLessAverage(struct StudentInfo StudentList[20]); /* function to find students there grade less than average grade */

/* ********************** Sub-Program Declarations Section End ******* */



/* ********************** Main call Section Start ******* */

int main()
{  struct StudentInfo StudentList[20] ; /* creating an array of struct to represent list of students */
   for (int i =0 ; i<20 ; i++){ /*A loop to get the data for each student */
    puts(" Enter the Student name :");
    scanf_s("%s" ,StudentList[i].name );
    puts(" Enter the Student Score :");
    scanf("%d" , &StudentList[i].score);
   }
    SortList(StudentList); /* sending list of student to be sorted  in an ascending order */
    printf(" THE HIGHEST SCORE IS : %d \n " , HighestScore(StudentList) ); /* printing highest score */
    TopStudents(StudentList); /* calling function to print top 5 student */
    StudentsLessAverage(StudentList); /* calling function to print names of students whose grades less than average and print a warning message */

    return 0;
}
/* ********************** Main call Section End ******* */

/* ********************** Sub-Program Definitions Section Start ******* */
void SortList(struct StudentInfo StudentList[20])
{  struct StudentInfo temp ;
    int i, j;
    for (i = 0; i < 19; i++){ /* loop for paths */
        for (j = 0; j <19 - i ; j++) /* loop for comparisons */
           {
               if ( StudentList[j].score > StudentList[j+1].score)
              { /* doing swaps */
                temp = StudentList[j];

                 StudentList[j] =  StudentList[j+1];

                 StudentList[j+1] = temp;
              }
           }

}
}
float Average(struct StudentInfo StudentList[20])
{
    int sum=0 ;
    float average=0;
    for(int i= 0 ; i<20 ; i++){ /* a loop to sum all the scores */
        sum += StudentList[i].score ;
    }
    average= sum / 20.00 ; /* finding average */
    return average ;
}
int HighestScore(struct StudentInfo StudentList[20]){
    int max = StudentList[0].score; /* initializing max to be first score */
    for( int i=0 ; i<20 ; i++){
        if(StudentList[i].score>max){
            max = StudentList[i].score ; /* getting max score */
        }
    }
    return max ;
}
void TopStudents(struct StudentInfo StudentList[20])
{   puts("The Top Five Students are:"); /*printing top 5 after sorting list in an ascending order */
    for(int i =19 ; i>=15 ; i--){
    printf("%d th student is %s \n" , i+1 ,StudentList[i].name);
                               }
}
void StudentsLessAverage(struct StudentInfo StudentList[20]){
    puts("Students Whose Grades are less than Average :");
    puts("(WARNING : YOU HAVE TO GET BETTER GRADES NEXT TEST OTHERWISE YOU WOULD FAIL)");
    float average=Average(StudentList);
    for(int i=0 ; i<20 ; i++){
        if(StudentList[i].score < average){ /* finding students with grades less than average to print there names */
        printf("%s \n" ,StudentList[i].name);
                                        }
    }
}

/* ********************** Sub-Program Definitions Section Start ******* */
