/* ********************** New Type Definition Section Start ************* */
typedef struct node{
 char data;
 struct node *next;
}Node;
/* ********************** New Type Definition Section End   ************ */
/* ********************** Sub-program Definition Section start   ************ */
unsigned int  insert( Node ** sptr , int value);
int deletenode(Node ** sptr ,int value);
void printlist( Node * sptr);
/* ********************** Sub-program Definition Section start   ************ */
unsigned int insert(Node ** sptr, int value)
{
     Node *  currPtr = *sptr;
     Node *  newPtr = (Node *) malloc( sizeof(Node));
    if( newPtr == NULL)
    {
        printf("%s"," NO ENOUGH SPACE");
        return 0 ;
    }
    else
    {
        newPtr->data = value;
        newPtr->next = NULL ;
        if( *sptr == NULL)
        {
            *sptr = newPtr ;
            return  1;
        }
        else{
            while(currPtr->next != NULL )
                {
                   currPtr = currPtr->next;
                }
           currPtr->next = newPtr ;
           return 1;
            }

    }
    return 0;
}

int deletenode( Node ** sptr, int value)
{
    Node * temp = NULL;
    if( *sptr == NULL )
    {
        printf("%s","LIST IS EMPTY NOTHING TO DELETE\n");
       return '\0' ;
    }
   else if( (*sptr)->data == value)
    {
        temp = *sptr;
        *sptr = (*sptr)->next;
        free( temp );
        return value ;
    }
    else
    {
        Node * prevPtr = *sptr;
        Node * currPtr = (*sptr)->next;
        while( currPtr->data != value  )
        {
            prevPtr = currPtr;
            currPtr = currPtr->next;
        }
            temp = currPtr;
            prevPtr->next = currPtr->next;
            free( temp);
            return value ;
    }
    return  8888 ;
}
void printlist( Node *sptr)
{
    if(  (sptr) == NULL)
    {
        printf("%s","LIST IS EMPTY \n");
        return ;
    }
    else
    {
        Node * currptr = (sptr) ;
        while(currptr != NULL)
        {
            printf("%d --> ", currptr->data);
            currptr = currptr->next;
        }
        return ;
    }
}

