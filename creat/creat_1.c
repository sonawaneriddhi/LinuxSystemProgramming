//Used to create and truncate
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = creat("LSP.txt",0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("file gets succesfully created with FD : %d\n",fd); 
    }

    close(fd);

    return 0;
}