//Using the open System call to read a symbolic link / shortcut / soft link of a file
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
    int iRet = 0;
    int fd = 0;
    

    fd = open("../Test/LSPL.txt",O_RDONLY);                         //Issue 

    if(fd == -1)
    {
        printf("Unable to open file : %s\n",strerror(errno));
        return -1;
    }

    printf("File opened with FD : %d",fd);

    close(fd);

    return 0;
}