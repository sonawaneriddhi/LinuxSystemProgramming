//system call to get the Process ID (pid)

#include<stdio.h>
#include<unistd.h>

int main()
{
    printf("PID of current process is : %d\n",getpid());

    return 0;
}