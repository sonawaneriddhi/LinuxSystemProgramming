//Using the readlink System call to read a symbolic link / shortcut / soft link of a file
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
    char Buffer[100];
    int iRet = 0;

    memset(Buffer,'\0',sizeof(Buffer));

    iRet = readlink("../Test/LSPl.txt",Buffer,100);

    if(iRet == -1)
    {
        printf("%s\n",strerror(errno));
    }

    Buffer[iRet] = '\0';
    
    printf("Contents of symbolic link : %s\n",Buffer);

    return 0;
}