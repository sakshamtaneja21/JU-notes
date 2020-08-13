#include <iostream>
#include <unordered_map>
#include <math.h>
using namespace std;
//THIS IS YOUR SECOND APPROACH USING HASH MAPS - Don't use maps as maps are slower. We can do this without maps also in c
//TIME COMPLEXITY IF THIS IS O(n√(max value of x))

//THE BELOW SOLUTION YOU CAME UP WITH AFTER A LOT OF RESEARCH FORM THE BELOW LINKS - 
//https://stackoverflow.com/questions/3578083/what-is-the-best-way-to-use-a-hashmap-in-c
//https://stackoverflow.com/questions/838404/implementing-a-hashmap
//https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
//got help regarding logic from the below link (BY THIS YOU INITIALLY but LATER DITCHED IT ) -  
//https://stackoverflow.com/questions/46388108/count-the-number-of-integers-in-an-array-divisible-by-a-given-query-k
int main(void) {
	int t;
	cin>>t;
	while(t--)
	{
	    int i,n,j,max=0,star_val=0;
	    unsigned long x;
	    cin>>n;
		//To have a 
	    unordered_map<unsigned long, int> hashmap;//The hashmap is like this -  "number(x)" => "count of numbers divisible by this number(x)"
												  //so if we feed this number(x) in hashmap (hashmap[x]) we will get its star value
	    for(i=0;i<n;i++)
	    {
	        cin>>x;

			if(hashmap.find(x)!=hashmap.end())//check if x is present in hashmap
	            star_val = hashmap[x];//if is then that means it has some start value assigned it. Store it in star_val
	        else
	            star_val = 0;//else this num has no star value thus star_val = 0*/
	        
			if(star_val > max)//finding answer i.e max star value
	            max=star_val;

			//This is where we do the main task -
			//We are checking for what numbers(j) is x a star value of that number(j) that means finding the factors of number x
	        if(i!=(n-1))
	            for(j=1;j<=sqrt(x);j++)
	            {
	                if(x%j==0)//j is a factor of x
    	            {
	                   ///increase the count of j in hashmap
	                    hashmap[j]++;//Remember - As soon as you access the map with the [] operator, if the key doesn't exist it gets added. 
									//The default initializer of the int type gets invoked - so it will get a value of 0 And doing ++ on it will 
									//increase its value to 1
	                    
    	                if(x/j!=j)// This is becuase of number is 25 there 5 (5 * 5 =25) will be a double factor of 25 but we have already counted it above so we don't do it again
	                         hashmap[x/j]++;//increase the count of j in hashmap
	                }
	            }
	    }
	    cout<<max<<endl;
	}
	return 0;
}