/*There are 2 ways to genrate all subseqs - 
	1. Recursive method (0/1 - choose/not-choose)
	2. (incomplete) Genrate power-set and in that set print the values in the input array corresponding to set bits*/

#include<bits/stdc++.h>
using namespace std; 

/*  SOURCE      -   https://www.youtube.com/watch?v=KCEPvdLqlYI (till first 3-4 minutes)
    LOGIC       -   use 0/1 logic i.e. first include then exculde each element from the subsequence (mainted as local for each call)
    COMPLEXITY  -   O(2^n) - n = input array size (thus faster than powerset(iterative) logic. For why read comment of next algo)
    
    
    NOTE- 
        1. We have to process arr[] from start (i.e. ele_indx = 0 for firstcall) processing from end will give subsquence
           in reverse becuase of the way logic works.
        
        2. This code works because subseq[] is local i.e. there is no pass by refrence
*/
void print(vector<int> subseq)//Supportive function to print subseq
{
    for(vector<int>::iterator i = subseq.begin() ; i < subseq.end() ; i++)
        printf("%d ", *i);
    printf("\n");
}

void subsequencesRec(vector<int> arr, int ele_indx, vector<int> subseq)
{
    if(ele_indx == arr.size())//this means there is no elemnt to process (include/exclude) from arr[] thus we have found a subsquence
    {
	    if(subseq.size())//To not print empty subsequence
	        print(subseq);
    }
	else
    {
        //Don't Include the current element (arr[len]) in subsequence
    	subsequencesRec(arr, ele_indx + 1, subseq);
    	
    	//Include the current element (arr[len]) in subsequence
    	subseq.push_back(arr[ele_indx]);//include's elemnt in the subseq
    	subsequencesRec(arr, ele_indx + 1, subseq);/*This call is diffrent from pri as subseq[] is local variable & thus
    	                                            local to each call And thus have different values for diffrent calls*/
	}
}




//COMPLEXITY O(2^n * l) - l = lenght of binary number (which may be same as n).
subsequencesPowerSet()// EASIER TO IMPLEMENT BUT SLOWER becuase it treverse the whole binary number for each number
{

}


int main() 
{ 
    vector<int> arr{1, 2, 3, 4}; 
    vector<int> b; 
  
    subsequencesRec(arr, 0, b); 
  
    return 0; 
} 