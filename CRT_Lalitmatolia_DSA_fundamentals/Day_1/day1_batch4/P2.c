#include<stdio.h>
int main()
{
	int a = 4, b = 3;
	//Remainder Operation
	printf("%d\n",a % b); // 1
	printf("%d\n",-a % b); // -1
	printf("%d\n", a % -b); // 1
	printf("%d\n", -a % -b); // -1
	
	//Divide Operation
	printf("%d\n",a / b); // 1
	printf("%d\n",-a / b); // -1
	printf("%d\n", a / -b); // -1
	printf("%d\n", -a / -b); // 1
	
	return 0;
}

/*
Remainder Rule:
+ve % +ve = +ve
-ve % +ve = -ve
+ve % -ve = +ve
-ve % -ve = -ve (sign will depend upon the numerator part)

Division Rule:
+ve / +ve = +ve
-ve / +ve = -ve
+ve / -ve = -ve
-ve / -ve = +ve
*/
