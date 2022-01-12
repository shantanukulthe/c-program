#include<stdio.h>
#include<malloc.h>

struct Node
{
     int data;
     struct Node* Next;
};

typedef struct Node  NODE;
typedef struct Node*  PNODE;
typedef struct Node**  PPNODE;

void InsertFirst(PPNODE First,int no);
void Display(PNODE First);

int main()
{
     PNODE Head=NULL;

     InsertFirst(&Head,30);
     InsertFirst(&Head,20);
     InsertFirst(&Head,10);

     Display(Head);

     return 0;
     
}

void InserFirst(PPNODE First,int no)
{
     PNODE newn=NULL;

     newn=(PNODE)malloc(sizeof(NODE));

     newn->data=no;
     newn->Next=NULL;

     if(*First==NULL)
     {
          *First=newn;
     }
     else
     {
          newn->Next=*First;
          *First==newn;
     }
}

void Display(PNODE First)
{
     while(First!=NULL)
     {
          printf("%d",First->data);
          First=First->Next;
     }
}