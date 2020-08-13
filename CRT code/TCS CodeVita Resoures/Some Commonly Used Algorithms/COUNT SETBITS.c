#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// 	YOU CAN MODIFY THE BELOW CODE TO CONVERT A DECIMAL TO BINARY
//	AND YOU CAN EVEN FIND INDEX OF EACH SET BIT USING THIS ALGO

long countSetBits(long num)
{
   	long setbits = 0/*, index = 0*/;
	
	while(num != 0)	// If the number is 0, no bits are set
	{
		// check if the bit at the current index 0 is set
		if(num & 1) //HERE YOU CAN EVEN HAVE AN INDEX VARIABLE WHICH CAN COUNT AT WHICH POSITION THE BIT IS SET AND STORE IT
			setbits++;
		
		// advance to the next bit position to check
		num = num >> 1;	// shift all bits one position to the right
	}

	return setbits;
}

/*	EXPLNATION HOW THE ABOVE FUNTION WORKS -
		
		If we were to run this for your example input number '5', we would see the following:
		iteration   input  76543210     index    result
		1           5      00000101     0        1 => bit set.
		2           2      00000010     1        0 => bit not set.
		3           1      00000001     2        1 => bit set.
		4           0      00000000     3        Stop, because inputNumber is 0
*/

int main()
{
    long ans,n;
    printf("Enter the number - \n");
    scanf("%ld",&n);
    ans = countSetBits(n);
    printf("SET BITS IN ABOVE NUMBER - \n%ld", ans);
    getch();
    return 0;
}