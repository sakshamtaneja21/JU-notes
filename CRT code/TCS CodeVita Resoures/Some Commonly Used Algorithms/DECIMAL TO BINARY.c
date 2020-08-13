#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void dec2bin(long a, char *str)
{
   	long i = 0, j = 0, max;
	
	if(a == 0)
		str[j++] = '0';
	else
   		for(i = (long)log2(a); i >= 0; i--){
    		if((a & (1 << i)) != 0)
       			str[j] = '1';
	    	else
    	   		str[j] = '0';
     		j++; 
   		}

   	str[j] = '\0';
}

int main()
{
    char arr[1000];
    int n;
    printf("Enter the number - \n");
    scanf("%d",&n);
    dec2bin(n, arr);
    printf("BINARY OF ABOVE NUMBER is - \n%s\n", arr);
    getch();
    return 0;
}