#include<stdio.h>
int main()
{
	int a = 4, b = 3;
	//Remainder Operation
	printf("%d\n",a % b); // 1
	printf("%d\n", -a % b); // -1
	printf("%d\n", a % -b); // 1
	printf("%d\n", -a % -b); // -1
	
	//Division Operation
	printf("%d\n",a / b); // 1
	printf("%d\n", -a / b); // -1
	printf("%d\n", a / -b); // -1
	printf("%d\n", -a / -b); // 1
	
	return 0;
}

/*
Remainder Operation:
+ve % +ve = +ve
-ve % +ve = -ve (Sign will depend upon the numerator part only)
+ve % -ve = +ve
-ve % -ve = -ve (Sign will depend upon the numerator part only)

Division Operation:
+ve / +ve = +ve
+ve / -ve = -ve
-ve / +ve = -ve
-ve / -ve = +ve
*/
