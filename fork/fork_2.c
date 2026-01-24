//system call to create a child process and display its parent and own PID (fork)

#include<stdio.h>
#include<unistd.h>

int main()
{
    pid_t pid = 0;

    pid = fork();

    printf("PID of current process : %d, PID of parrent : %d, Return Value of fork() : %d\n",getpid(),getppid(),pid);
    
    return 0;
}