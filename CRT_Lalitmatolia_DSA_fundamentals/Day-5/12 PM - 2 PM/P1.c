#include<stdio.h>
int main(int argc, char *argv[])
{
	printf("Total Count = %d\n", argc);
	printf("Command Name = %s\n", argv[0]);
	printf("argv[1] = %s\n", argv[1]);
	printf("argv[2] = %s\n", argv[2]);
	printf("argv[3] = %s\n", argv[3]);
	return 0;
}
/*
argc = Total number of arguments supplied from the command prompt
argv[0] = First Argument (The name of the command - Program Name with .exe extension)
argv[1] = 10
argv[2] = 20
argv[3] = 30

C:\>P1.exe 10 20 30
argv[0] = P1.exe
argv[1] = 10
argv[2] = 20
argv[3] = 30
*/
