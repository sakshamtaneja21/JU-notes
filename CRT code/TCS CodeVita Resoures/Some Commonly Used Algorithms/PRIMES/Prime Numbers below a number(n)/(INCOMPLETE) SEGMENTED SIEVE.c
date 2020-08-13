/*
Note : The idea works well for n upto the order of 10^7 only. Beyond this we will face memory issues.

LOGIC -
    idea is to store the Smallest Prime Factor(SPF) for every number. Then to calculate the prime factorization of the given number by dividing 
    the given number recursively with its smallest prime factor till it becomes 1.

Time Complexity -
    The precomputation for smallest prime factor is done in O(n log log n) using sieve. Where as in the calculation step we are dividing the 
    number every time by the smallest prime number till it becomes 1. So, let’s consider a worst case in which every time the SPF is 2 . 
    Therefore will have log n division steps. Hence, We can say that our Time Complexity will be O(log n) in worst case.

Source -    https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXN   1000001
  
int spf[MAXN];//spf[x] - stores the smallest prime factor of x
bool prime[MAXN];//prime[i]=1 - means i is primes otherwise not a prime 
  
// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn)
void sieve()
{
    fill_n(prime, MAXN, 1);//initially we assume that all numbers are primes
    
    for(int i = 0 ; i < MAXN ; i++) spf[i] = i;//initialze spf of number i as itself
    
    for(int i = 2, cnt = 0, j ; i*i < MAXN ; i++)
        if(spf[i] == i)//means i is a prime number as its spf is itself
            for(j = i*i /*prime[cnt++] = i//stores "prime number" and not bool vale in array*/ ; j < MAXN ; j += i)//so we make i as spf of itself & all its multiples & mark all its multiples with 0 as they are composite
                //BEWARE - only store spf if it is not stored previously or else it will end storing the largest prime fact
                if(spf[j] == j)  spf[j] = i, prime[j] = 0;
}
  
// A O(log n) function returning primefactorization 
// by dividing by smallest prime factor at every step 
//NOTE - For storing just prime factors, remove the pair<> part below.
void primeFactorization(int x, vector< pair<int, int> > &fact)
{
    while(x != 1)
    {
        int pf = spf[x], pwr = 0;
        fact.push_back({pf, pwr});
        for(int last = fact.size() - 1 ; x % pf == 0 ; x /= pf)
            fact[last].second = ++pwr;
    }
}
