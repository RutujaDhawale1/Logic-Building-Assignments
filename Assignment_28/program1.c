////////////////////////////////////////////////////////////////////////////
//
//      File Name     : program1.c
//      Description   : write application which accept file name from user
//                      and open that file in read mode
//      Author        : Rutuja Suresh Dhawale
//      Date          : 18/6/2025
//
/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

    printf("Enter the file name :");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR);
     
    if(fd == -1)
    {
        printf("Unable to open the file \n");
    }
    else
    {
        printf("File is opend successfully with fd:%d\n", fd);
        close(fd);
    }

    return 0;
}