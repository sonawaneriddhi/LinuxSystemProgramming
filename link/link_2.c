//Using the Link System call to create a hardlink of a file in another directory
#include<stdio.h>

int main()
{
    int iRet = 0;

    iRet = link("./Demo.txt","../Test/Demo.txt");

    if(iRet == 0)
    {
        printf("Link is successfull\n");
    }

    return 0;
}