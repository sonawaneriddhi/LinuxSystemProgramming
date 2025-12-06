//Compilation : gcc creat_2.c -o Myexe

//Execution: ./Myexe Demo.txt > output.txt

//creat using Command line args
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc , char * argv[])
{
    int fd = 0;

    fd = creat(argv[1],0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File gets succesfully created with FD : %d\n",fd); 
    }

    close(fd);

    return 0;
}
