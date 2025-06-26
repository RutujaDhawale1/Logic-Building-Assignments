//////////////////////////////////////////////////////////////////////////////////
//
//      File Name     : program4.c
//      Description   : write application which accept file name from user
//                      and display the size of file  
//      Author        : Rutuja Suresh Dhawale
//      Date          : 18/6/2025
//
///////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    int iRet = 0, iSum = 0;
    char Buffer[BUFFER_SIZE]= {'\0'};

    printf("Enter the file name :");
    scanf("%s", Fname);

    fd = open(Fname, O_RDONLY);
     
    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1; 
    }
    else
    {
        printf("File is open successfully with fd:%d\n", fd);

        while((iRet = read(fd, Buffer, BUFFER_SIZE))!= 0)
        {
            iSum = iSum + iRet;
        }
        printf("Size of file is : %d Bytes\n", iSum);
        close(fd);
    }
    
    return 0;
}