//close()
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;

    fd = open("Second.c",O_CREAT | O_TRUNC ,0777);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("Fule successfully created with FD : %d\n",fd);
    }

    close(fd);
    
    return 0;
}