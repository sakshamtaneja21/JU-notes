#include <iostream>
#include <vector>
using namespace std;
void plus1(vector<int> &v)
{
    int i,n;
    v.push_back(1982);
    n=v.size();
    for(i=0;i<n;i++)
        v[i]++;
}
int main() {
	int n,i,input;
	vector<int> num;
	while (cin >> input)
        num.push_back(input);
    plus1(num);
    n=num.size();
	for(i=0;i<n;i++)
	    cout << num[i] << " ";
	return 0;
}