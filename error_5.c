//Output for various err statements

#include<stdio.h>
#include<errno.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDONLY);

    printf("Value of FD : %d\n",fd);

    if(errno != 0)
    {
        switch (errno)
        {
        case ENOENT:
            printf("There is no such file or directory. Create the file and open\n");
            break;
        
        case EACCES:
            printf("Unable to access as there is no permission\n");
            break;
        
        case EEXIST:
            printf("The file already exists , try opening without creating\n");
            break;
        
        default:
            printf("%s",strerror(errno));
            break;
        }
    }

    return 0;
}