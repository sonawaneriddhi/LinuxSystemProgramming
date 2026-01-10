//Using the readlink System call to read a symbolic link / shortcut / soft link of a file and then open its path
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
    char Buffer[100];
    int iRet = 0;
    int fd = 0;

    char Data[20];

    memset(Buffer,'\0',sizeof(Buffer));
    memset(Data,'\0',sizeof(Data));

    iRet = readlink("../Test/LSPl.txt",Buffer,100);

    if(iRet == -1)
    {
        printf("%s\n",strerror(errno));
    }

    Buffer[iRet] = '\0';
    
    printf("Contents of symbolic link : %s\n",Buffer);

    fd = open(Buffer,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File successfully opened\n");
    }
    
    iRet = read(fd,Data,10);

    printf("%d bytes successfully read from file\n",iRet);
    printf("Data from file is :  %s\n",Data);

    close(fd);
    return 0;
}