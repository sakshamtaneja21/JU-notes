#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    int i, j=0;
    printf("argv[0] = %d\n",atoi(argv[0]));
    for(i=1; i<argc; i++)
        j = j+atoi(argv[i]);
    printf("%d\n", j);
    return 0;
}
/*
c:\>P5.exe 1 2 3
argc = 4
argv[0] = P5.exe
argv[1] = 1
argv[2] = 2
argv[3] = 3
*/
