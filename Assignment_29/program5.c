#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

#define BUFFER_SIZE 1024

void DisplayN(char Fname[], int iSize)
{
    int fd = 0;
    int iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file \n");
    }

    iRet  = read(fd, Buffer, iSize);

    if(iRet == 0)
    {
        printf("File is empty \n");
    }
    else
    {
        printf("data from file is %d\n", iRet);
        write(1, Buffer, iRet);
        printf("\n");
    }
    close(fd);
}

int main()
{
    char Fname[20] = {'\0'};
    int iValue = 0;

    printf("Enter the file name :");
    scanf("%s", Fname);

    printf("Enter the character:");
    scanf(" %d", &iValue);

    DisplayN(Fname, iValue);

    return 0;
}