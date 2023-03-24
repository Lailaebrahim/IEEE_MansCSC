//Max size of the queue
#define MAXQUEUE 1000

typedef struct {
int ID;
float GPA;
char FName[40];
char LName[40];
int course_id[5];

}element_t;

//struct to create the variables we will use in the queue
typedef struct Queue{
    int front;
    int rear;
    int size;
    int students_no;
   }DataBase_t;





//functions prototype

void DataBase_init(DataBase_t *pq);
void Add_Student_Manually(element_t *Data ,DataBase_t *pq );
void Add_Student_From_File(element_t *Data ,DataBase_t *pq );
int QueueFull(DataBase_t *pq);
void Find_Student_By_ID(element_t *Data ,DataBase_t *pq);
void Find_Student_By_FN(element_t *Data ,DataBase_t *pq);
void Find_Students_In_Course(element_t *Data ,DataBase_t *pq) ;
int Print_Student_Count(DataBase_t *pq);
void View_All(element_t *Data ,DataBase_t *pq);
void Update_Student(element_t *Data ,DataBase_t *pq);
void Delete_Student(element_t *Data ,DataBase_t *pq);


