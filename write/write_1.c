//Writing in to the file using system call

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>

int main()
{
    int fd = 0;
    char Buffer[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int iRet = 0;

    fd = open("Demo.txt",O_WRONLY);

    if(fd < 0)
    {
        printf("Unable to open the file\n");
        printf("Reason : %s",strerror(errno));
        return -1;
    }

    printf("File successfully opened with FD : %d\n",fd);

    iRet = write(fd,Buffer,10);

    if(iRet < 0)
    {
        printf("Unable to write into the file\n");
        printf("Reason : %s",strerror(errno));
        return -1;
    }

    printf("Successfully written %d bytes into the file\n",iRet);

    close(fd);

    return 0;
}