//////////////////////////////////////////////////////////////////////////////////
//
//      File Name     : program3.c
//      Description   : write application which accept file name from user
//                      and read all data from file and display contents on screen 
//      Author        : Rutuja Suresh Dhawale
//      Date          : 18/6/2025
//
///////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Fname[20] = {'\0'};
    int iRet1 = 0, iRet2 = 0; 
    char Buffer1[] = "Jay Ganesh";
    char Buffer2[50]= {'\0'};

    printf("Enter the file name :");
    scanf("%s", Fname);

    fd = open(Fname, O_RDWR | O_CREAT ,0777);
     
    if(fd == -1)
    {
        printf("Unable to open the file \n");
        return -1; 
    }
    else
    {
        printf("File is open successfully with fd:%d\n", fd);

        iRet1 = write(fd, Buffer1, strlen(Buffer1));
        printf("%d Bytes gets written successfully \n", iRet1);

        lseek(fd,0,SEEK_SET);

        iRet2 = read(fd , Buffer2, sizeof(Buffer2) -1);
        Buffer2[iRet2] = '\0';

        printf("%d bytes gets read successfully \n", iRet2);
        printf("Data from file is: %s\n", Buffer2);
    }
    
    close(fd);

    return 0;
}