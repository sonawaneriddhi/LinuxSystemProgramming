//open using O_Creat

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Second.c",O_CREAT,0777);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
    }
    else
    {
        printf("Fule successfully created with FD : %d\n",fd);
    }

    return 0;
}