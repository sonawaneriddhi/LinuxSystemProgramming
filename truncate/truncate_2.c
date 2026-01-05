//Using the Truncate system call (Erasing data after 30 bytes)
#include<stdio.h>
#include<unistd.h>

int main()
{
    int iRet = 0;

    iRet = truncate("Demo.txt",30);

    if(iRet == 0)
    {
        printf("Truncate is successfull\n");
    }
    else
    {
        printf("There is issue in Truncate\n");
    }

    return 0;
}