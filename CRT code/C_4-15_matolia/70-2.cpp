#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int LCS(strinf X, string Y, int m, int n, unordered_map<string,int>&map);
{
	if (m==0 || n==0)
	return 0;

	string Key=to_string(m)+"|"+to_string(n);


	if (map.find(key)==map.end())
	{
		if(X[m-1]==Y[n-1])
		map[key]=1+LCS(X,Y,m-1,n-1,map);
		
		else
		map[key]=max(LCS(X,Y,m-1,n-1,map), LCS(X,Y,m,n-1,map));
	}
	return map[key];

}
int main()
{

	string X = "ABCBDAB";
	string Y = "BDCABA";
	unordered_map<string, int>map;


	cout<<"%d", LCS(X,Y,X.length(),Y.length(),map);
}
