/*THIS IS A LITTLE OPTIMIZED VERSION AS THE OUTER LOOP (i) RUNS TILL sqrt(MAXN) not till n.
  The complexity of both will be almost same but the number of operations will hughly differ So the sieving till root n is a bit better (TO UNDERSTAND IN DEEP READ THE CP-ALGORITHM SEIVE ARTICLE)
*/
#include<bits/stdc++.h>
using namespace std;

#define MAXN 100000001

bool prime[MAXN];//using bool will save memory
  
void sieve()
{
    fill_n(prime, MAXN, 1);//we assume that all numbers are primes by storing 1. If a number is composite it will be marked with 0 
    
    for(int i = 2 ; i*i < MAXN/*formal proof below*/ ; i++)
        if(prime[i])//means i is a prime number as it is not multiple of any number.
            for(int j = i*i ; j < MAXN ; j += i)//this loop will mark all multiples of prime i with 0 (composite number) as they are divisible by i and thus not prime
                prime[j] = 0;
}

/*
PROOF 1 (MORE MATHEMATHEMATICAL) -
1. Every composite number has at least one prime factor less than or equal to square root of itself.
(This property can be proved using counter statement. Let a and b be two factors of n such that a*b = n. If both are greater than √n, then a.b > √n, * √n, which contradicts the expression “a * b = n”.)
2. So we only need to check for the prime below sqrt(n). 
e.g. N=49, we must check 7, but do not need to check anything higher, since any composite number divisible by a larger number would also be divisible by a number less than the square root of N, hence we would already have found it

PROOF 2 -
For n not to be prime, it needs at least two prime factors. The square root of n provides a 'pivot': if x is less than the square root of n, then y=nx is greater than the square root of n.

So, if no prime factors are found by the square root of n and n is composite, at least two factors of n must be greater than the square root of n, which is an obvious contradiction.


PROOF 3 (MORE INTUITIONAL) -
Suppose, if you want to find prime numbers upto N = 26, that is you want to find numbers which are divisible by itself and 1.
1. So, if any number ‘X’ (between 1 and 26) comes in any other number’s table, it cannot be prime.
2. Now, let’s take number 26 itself, the maximum number between 1 and 26 in which table it comes, is 13, because 13 * 2 = 26, and if you go above 14 * 2 > 26. And if it doesn’t come in any table till (n/2) then it is a prime.
3. So, we are sure we need to check multiplication table only till 13.
4. Any number ‘X’ if divisible can be broken into a * b, just like for 26 it was 13 * 2 (i.e. 26 comes in 2’s table as well as 13’s table).
5. There can be two possibilities either a >= b, or b > a. And we always choose only the smaller number’s table to check if a number ‘X’ is divisible. (i.e. we only choose 2’s table to check whether 26 is divisible)
6. Now, this problem has transformed into a problem where we need to find the Maximum(Minimum(a, b)). So, basically when ‘a’ becomes equal to ‘b’, we get the answer. Hence, a^2 = X or go till a = sqrt(X).
*/