#include<stdio.h>
#include<unistd.h>

int main()
{
    pid_t pid = 0;

    pid = fork();

    if(pid == 0)
    {
        printf("Child Process\n");
        execl("../FirstExe","",NULL);
    }
    else
    {
        printf("Parent Process\n");
    }

    return 0;
}