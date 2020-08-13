#include<iostream>
#include<string>

using namespace std;
int LCS(string X, string Y, int m, int n);
{
	if (m==0 || n==0)
	return 0;
	
	
	
	
	if (X[m-1]==Y[n-1])
	return max(LCS(X,Y,n-1), LCS(X,Y,m-1,n));
	
}
int main()
{
	
	string X = "ABCBDAB";
	string Y = "BDCABA";
	
	
	
	printf("%d", LCS(X,Y,X.length(),Y.length()));
}
