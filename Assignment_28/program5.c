//////////////////////////////////////////////////////////////////////////////////
//
//      File Name     : program5.c
//      Description   : write application which accept file name from user and one
//                      string write that string at the end of the file 
//      Author        : Rutuja Suresh Dhawale
//      Date          : 18/6/2025
//
///////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>


int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    int iRet = 0;
    char Buffer[]= "Hello World\n";

    printf("Enter the file name :");
    scanf("%s", Fname);

    fd = open(Fname, O_CREAT | O_WRONLY | O_APPEND, 0777);
     
    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1; 
    }
    else
    {
        printf("File is open successfully with fd:%d\n", fd);

        iRet = write(fd, Buffer, strlen(Buffer));

        printf("Write %d  bytes at the end of the file\n", iRet);
        close(fd);
    }
    
    return 0;
}