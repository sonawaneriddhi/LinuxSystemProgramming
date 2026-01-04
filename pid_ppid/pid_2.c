//system call to get the Process ID (pid) with its Parent Proces ID (ppid)

#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("PID of current process is : %d\n",getpid());
    printf("PID of parent process is : %d\n",getppid());

    return 0;
}