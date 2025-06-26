////////////////////////////////////////////////////////////////////////////
//
//      File Name     : program2.c
//      Description   : write application which accept file name from user
//                      and create that file in read mode
//      Author        : Rutuja Suresh Dhawale
//      Date          : 18/6/2025
//
/////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};

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
    }

    return 0;
}