#include<iostream>
using namespace std; 
class Test
{
      int x; 
    public:
      Test();
      void Show();
      ~Test(){}
};
Test::Test()
{
    x = 5;
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
