//Displaying the error statement for that particular errno

#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    printf("Value of FD : %d\n",fd);

    printf("Value of errno : %d\n",errno);          //2

    printf("Error statement : %s\n",strerror(errno));

    return 0;
}