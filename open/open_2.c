//only open
#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Second.c",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("File successfully opened with FD : %d",fd);
    }

    return 0;
}