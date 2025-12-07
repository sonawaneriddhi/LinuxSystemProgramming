//Reading from the file using read() sys call

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<errno.h>

int main()
{
    int fd = 0;
    char Buffer[100] = {'\0'};
    int iRet = 0;

    fd = open("Demo.txt", O_RDONLY);

    if(fd < 0)
    {
        printf("Unable to open the file\n");
        printf("Reason : %s",strerror(errno));
        return -1;
    }

    printf("File successfully opened with FD : %d\n",fd);

    iRet = read(fd,Buffer,10);

    if(iRet < 0)
    {
        printf("Unable to read from the file\n");
        printf("Reason : %s",strerror(errno));
        return -1;
    }

    printf("Successfully read %d bytes from the file\n",iRet);

    printf("Data from File : %s\n",Buffer);

    close(fd);

    return 0;
}