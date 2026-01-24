//system call to create a child process and display the following(fork)
#include<stdio.h>
#include<unistd.h>

int main()
{
    if(fork() == 0)
    {
        printf("Child process scheduled\n");
    }
    else
    {
        printf("Parent process scheduled\n");
    }
    
    return 0;
}