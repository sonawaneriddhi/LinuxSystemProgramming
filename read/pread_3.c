#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    off_t offset = 0;
    char Buffer[100];
    int iRet = 0;

    fd = open("./Demo.txt",O_RDONLY);

    offset = lseek(fd,0,SEEK_SET);
    printf("Current Offset is : %ld\n",offset);         //0

    iRet = pread(fd,Buffer,5,10);

    write(1,Buffer,iRet);
    printf("\n");
    
    offset = lseek(fd,0,SEEK_CUR);
    printf("Current Offset is : %ld\n",offset);         //15

    close(fd);
    
    return 0; 
}