#include<stdio.h>

int main(int a, char **b)
{
	printf("a=%d\n", a);
    printf("%c\n", b[2][1]);
    return 0;
}

/*
a[i] = i[a] = *(a+i) = *(i+a)
a[i][j] = *(*(a+i)+j)

*/

/*
C:\>P4.exe one two three
argv[0] = program name = *(argv+0)
argv[1] = *(argv+1)
*/
