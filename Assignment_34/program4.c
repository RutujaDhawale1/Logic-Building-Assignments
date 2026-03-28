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

int Maximum(PNODE first)
{
    int iMax = 0;

    iMax = first->data;

    while(first != NULL)
    {
        if(iMax < first->data)
        {
            iMax = first->data;
        }
        first = first->next;
    }
    return iMax;
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

    iRet = Maximum(head);
    printf("\nThe Maximum number from the linked list is : %d\n",iRet);

    return 0;
}