#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
}

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }
}

int SearchLastOcc(PNODE first, int no)
{
    int iCount = 1, LastPos = 0;

    while(first != NULL)
    {
        if(first->data == no)
        {
            LastPos = iCount;
        }
        first = first->next;
        iCount++;
    }
    return LastPos;
}

int main()
{
    PNODE head = NULL;
    int iValue = 0, iNum = 0, iRet = 0, iCnt = 0, iNo = 0;

    printf("Enter the number of elements you want to insert : \n");
    scanf("%d",&iNum);

    for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
        printf("Enter the data that you want to insert : \n");
        scanf("%d",&iValue);
        InsertFirst(&head,iValue);
    }

    Display(head);

    printf("\nEnter the element you want to search : \n");
    scanf("%d",&iNo);
    iRet = SearchLastOcc(head,iNo);
    printf("The Last occurence of %d is %dth time\n",iNo,iRet);

    return 0;
}