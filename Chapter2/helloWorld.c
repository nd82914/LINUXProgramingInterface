#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;
    printf("Num of arg =");
    printf("%d\n",argc);
    for(i=1;i<argc;i++)
    {
        printf("%s",argv[i]);
        printf("\n");
    }
    return 0;
}

/*
nd82914@McCartney:~/Dropbox/Git/LINUXProgramingInterface/Chapter2$ ./a.out maccartney lenon harrison
Num of arg =4
maccartney
lenon
harrison
nd82914@McCartney:~/Dropbox/Git/LINUXProgramingInterface/Chapter2$ 
*/