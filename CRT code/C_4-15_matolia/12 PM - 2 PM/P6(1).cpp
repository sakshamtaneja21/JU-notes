#include<iostream>
using namespace std; 
class Test
{
    int *p; 
    public:
    Test(int xx, char ch) // 2-argumented constructor
    {
        p  = new int(); // To allocate the memory to pointer variable
        *p = xx + int(ch);  //*p = 10 + 66 = 76;
        cout<<*p;
    }
    ~Test() 
    {
    	cout<<"In Destructor"<<*p<<endl;
        delete p;
        cout<<"After Deletion="<<*p<<endl;
    }
};
int main()
{
    Test ob(10, 'B'); 
    return 0;
}
