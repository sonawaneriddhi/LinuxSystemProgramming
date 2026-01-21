//program to demonstrate wait() system call

#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    pid_t pid = 0;

    pid = fork();

    if(pid == 0)
    {
        sleep(10);
        printf("Child process is runnung\n");
    }
    else
    {
        printf("Parent process is running\n");
    }

    return 0;
}