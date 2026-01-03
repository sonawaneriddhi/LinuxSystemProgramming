#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    off_t offset = 0;
    char Buffer[100] = "Pune";
    int iRet = 0;

    fd = open("./Demo.txt",O_WRONLY | O_APPEND);

    iRet = pwrite(fd,Buffer,4,10);

    offset = lseek(fd,0,SEEK_CUR);
    printf("Current Offset is : %ld\n",offset);         //15

    close(fd);
    
    return 0; 
}