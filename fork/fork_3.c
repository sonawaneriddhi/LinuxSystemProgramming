//system call to create a child process and display the following(fork)

#include<stdio.h>
#include<unistd.h>

int main()
{
    pid_t pid = 0;

    pid = fork();

    if(pid == 0)
    {
        printf("CHILD SAYS : PID of current process : %d, PID of parrent : %d, Return Value of fork() : %d\n",getpid(),getppid(),pid);
    }
    else
    {
        printf("PARENT SAYS : PID of current process : %d, PID of parrent : %d, Return Value of fork() : %d\n",getpid(),getppid(),pid);
    }

    
    return 0;
}