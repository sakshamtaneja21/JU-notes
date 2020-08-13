//Still test whether producing write answer or not

/* Iterative Function to calculate (x^y) in O(logy) */
/*
	Inspired from - https://www.youtube.com/watch?v=EHUgNLN8F1Y
			(Shows mod Exponentiation)
			
			(IF not able to understand from above)
			https://www.youtube.com/watch?v=HN7ey_-A7o4
	*/
int power(int x, unsigned int y) 
{ 
    int res = 1; // Initialize result 
  
    while (y > 0) {
	//Check if the last bit is 1. If yes that means we have to inculde that power of x in our answer (explained at the end of the video 
		//a^m * a^n = a^(n+m) 
        if (y & 1) // If y is odd, multiply x with result 
            res = res * x; 
  
        // n must be even now 
        y = y >> 1; 
	//THIS is the part where he explained (a^b)^b = a^2b
        x = x * x; // Change x to x^2 
    } 
    return res; 
} 
  
// Driver program to test above functions 
int main() 
{ 
    int x = 3; 
    unsigned int y = 5; 
  
    printf("Power is %d", power(x, y)); 
  
    return 0; 
}