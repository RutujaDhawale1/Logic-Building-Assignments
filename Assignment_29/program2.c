#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountSmall(char Fname[])
{
    int fd = 0;
    int iCount = 0;
    int iCnt = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) > 0)
    {
        for(iCnt = 0; iCnt < iRet; iCnt++)
        {
            if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
            {
                iCount++;
            }
        }
    }
    close(fd);
    return iCount;
}

int main()
{
    char Fname[20] = {'\0'};
    int iRet = 0;

    printf("Enter the file name :");
    scanf("%s", Fname);

    iRet = CountSmall(Fname);

    if(iRet != -1)
    {
        printf("Number of Small characters are : %d\n", iRet);
    }

    return 0;
}