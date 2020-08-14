#include<iostream>
using namespace std; 
class Test
{
	public:
    int x, y, z; 
    public:
    Test(int xx) 
    {
        x = ++xx; // x = 6; xx = 6
    } 
    ~Test()
    {
        cout<<x - 1 <<" ";
    }
    void Display()
    {
        cout<<--x + 1 << " "; // 6; x = 5 
    } 
};
int main()
{
    Test ob(5);
    ob.Display();
    int *p = (int*)&ob;
    *p = 40;
    ob.Display();
    
    return 0; 
}
