//Illustrates construction of vectors and output of vector elements
#include<iostream>
#include<vector>
using namespace std;

vector <double> V(4);      //size=4, value of each =0
vector <int> V1(4,35);     //size=4, value of each=35

int main()
{
    vector<double> V2(4,4.5);//size=4, value of each=4.5
    vector<char> V3(4,'B');//vector V3 has four elements each equal to 'B'.
    vector<int> V4(V1);   //V4 is copy of V1
    vector<int> V5;
    
    for(int i=0;i<4;i++)
    V5.push_back(5); //To add new element at the back of vector V5
    cout<<"V\tV1\tV2\tV3\tV4\tV5"<<endl;
    
    for(int j=0;j<4;j++)
    cout<<V[j]<<"\t"<<V1[j]<<"\t"<<V2[j]<<"\t"<<V3[j]<<"\t"<<V4[j]<<"\t"<<V5[j]<<endl;
    return 0;
}

