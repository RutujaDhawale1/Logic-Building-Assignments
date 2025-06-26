#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountCapital(char Fname[])
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
            if((Buffer[iCnt] >= 'A') && (Buffer[iCnt] <= 'Z'))
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
    int fd = 0;
    char Fname[20] = {'\0'};
    char Buffer1[] = "Jay Ganesh";
    int iRet1 = 0;
    int iRet2 = 0;
    printf("Enter the file name :");
    scanf("%s", Fname);

    fd = creat(Fname, 0777);
     
    if(fd == -1)
    {
        printf("Unable to creat the file \n");
    }
    else
    {
        printf("File is creat successfully with fd:%d\n", fd);

        iRet1 = write(fd, Buffer1, strlen(Buffer1));
        printf("%d Bytes gets written successfully \n", iRet1);

        close(fd);

    }

    iRet2 = CountCapital(Fname);

    if(iRet2 != -1)
    {
        printf("Number of capital characters are : %d\n", iRet2);
    }

    return 0;
}