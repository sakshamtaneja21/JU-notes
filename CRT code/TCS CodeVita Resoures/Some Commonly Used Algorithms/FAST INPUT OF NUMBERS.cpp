#include <iostream>
using namespace std;
/*
This method gi was 2 times more faster than taking input using getchar().
NOTE - But this will only work in c++ because c++ allows refrence (& before a parameter in function)
*/
void gi(int &x) {
	char ch = getchar(); 
	x = 0; 
	while (ch < '0' || ch > '9') ch = getchar(); 
	while (ch >= '0' && ch <= '9') x = x * 10 + ch - 48, ch = getchar();
	}
int main(void) {
	int i,n,arr[100000];
	printf("ENTER THE NUMBER OF VALUES IN THE ARRAY - ");
	gi(n);
	for(i = 0 ;i < n ; i++)
		gi(arr[i]);//CHECK IF THIS WORKS ON ARRAYS
	return 0;
}