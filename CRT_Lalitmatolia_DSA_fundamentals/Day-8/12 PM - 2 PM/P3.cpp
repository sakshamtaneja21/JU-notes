#include<iostream>
using namespace std; 
class Test
{
    int x; 
    public:
      Test();
     ~Test();
      void Show();
};
Test::Test()
{
    x = 25;
}
void Test::Show()
{
    cout<<x;
}
int main()
{
    Test ob;
    ob.Show();
    return 0; 
}
