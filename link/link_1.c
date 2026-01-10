//Using the Link System call to create a hardlink of a file
#include<stdio.h>

int main()
{
    int iRet = 0;

    iRet = link("Demo.txt","DemoX.txt");

    if(iRet == 0)
    {
        printf("Link is successfull\n");
    }

    return 0;
}