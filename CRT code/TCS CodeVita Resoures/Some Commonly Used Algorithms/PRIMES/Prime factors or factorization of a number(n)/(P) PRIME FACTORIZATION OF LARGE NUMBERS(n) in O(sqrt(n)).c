#include <stdio.h>
#include <math.h>

void factorize(long long n) 
{ 
    int count = 0; 
  
    // count the number of times 2 divides  
    while (!(n % 2)) { 
        n >>= 1; // equivalent to n=n/2; 
        count++; 
    } 
  
    // if 2 divides it 
    if (count) 
        printf("2 %d\n",count); 
  
    // check for all the possible numbers that can  
    // divide it 
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            printf("%lld %d\n",i, count);
    } 
  
    // if n at the end is a prime number. 
    if (n > 2) 
        printf("%d 1\n",n); 
} 

int main() 
{ 
    long long n = 1000000000000000000; 
    factorize(n); 
    return 0; 
} 