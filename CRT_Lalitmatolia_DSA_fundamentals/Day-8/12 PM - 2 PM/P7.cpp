#include<iostream>
using namespace std; 
class Test
{
    int x, y; 
    public:
    Test(int xx = 10, int yy = 20 )
    {
        x = xx; 
        y = yy;
    }
    void Display()
    {
        cout<< x << " " << y << endl;
    } 
    ~Test()
    { } 
};
int main()
{
    Test ob; 
    ob.Display(); 
    return 0;
}
