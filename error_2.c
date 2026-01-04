//Errorno if open() sys call gives an error internally

#include<stdio.h>
#include<errno.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    printf("Value of FD : %d\n",fd);

    printf("Value of errno : %d\n",errno);          //2

    return 0;
}