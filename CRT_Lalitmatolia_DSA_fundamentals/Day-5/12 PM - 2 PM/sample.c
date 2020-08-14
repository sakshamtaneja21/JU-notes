#include<stdio.h>

int main(int argc, char *argv[])
{
    while(--argc>0)
        printf("%s", *++argv);
    return 0;
}

/*
sample monday tuesday wednesday thursday

argc = 5
argv[0] = sample
argv[1] = monday
argv[2] = tuesday
argv[3] = wednesday
argv[4] = thursday

--argc =>  argc = argc - 1 = 5 - 1 = 4
while(4>0)
	monday
while(3>0)
	tuesday
while(2>0)
	wednesday
while(1>0)
	thursday
while(0>0) X
*/
