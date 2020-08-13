#include<map>
#include<iostream>
using namespace std;
int row[] = {0,1,0,-1};
int col[] = {1,0,-1,0};
int isvalid(int i, intj){
	if(i==3 && (j==0 || j==2))
	return 0;
	
	return (i>0 && i<=3 && j>==0 && j<--2);
}
void Fillmap(multimap<int,int>&keypad)
{
	
	char key[4][3] = {{'1','2','3'},
						  {  '4','5','6'},
						  {  '7','8','9'},
						  {  '*','0','#'}}
						  
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<3; j++)
		{
			for (int k=0; k<4; k++)
			{
				int r=i+row[k];
				int r= i+col[k];
				
				
				if (isvalid(i,j) && isvalid(r,c))
				keypad.insert(make_pair(key[i][j] - '0', key[r][c] -'0'));
			}
		}
	}
							 
}

int main()
{
	
	int n=2;
	multimap<int,int>keypad;
	Fillmap(keypad);
	
	for (auto it=keypad.find(0); it!=keypad.end(); it++)
	cout<<it->first<<" "<<it->second<<endl;
	
}
