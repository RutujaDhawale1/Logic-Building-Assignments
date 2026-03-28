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

void DisplayPerfect(PNODE first)
{
    int iSum = 0, iCnt = 0;

    while(first != NULL)
    {
        iSum = 0;

        for(iCnt = 2; iCnt <= (first->data)/2; iCnt++)
        {
            if(((first->data) % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == (first->data))
        {
            printf("%d\t",first->data);
        }

        first = first->next;
    }
}

int main()
{
    PNODE head = NULL;
    int iValue = 0, iNum = 0, iCnt = 0;

    printf("Enter the number of elements you want to insert : \n");
    scanf("%d",&iNum);

    for(iCnt = 1; iCnt <= iNum; iCnt++)
    {
        printf("Enter the data that you want to insert : \n");
        scanf("%d",&iValue);
        InsertFirst(&head,iValue);
    }

    Display(head);

    printf("\nThe Perfect number of linked list are : \n");
    DisplayPerfect(head);

    return 0;
}