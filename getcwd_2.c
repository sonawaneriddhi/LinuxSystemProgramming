//using getcwd() system call to get the current working directory's name
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<unistd.h>

int main()
{
    char Buffer[50];

    memset(Buffer,'\0',sizeof(Buffer));

    getcwd(Buffer,sizeof(Buffer));

    printf("Current Directory Name : %s\n",Buffer);   

    return 0;
}