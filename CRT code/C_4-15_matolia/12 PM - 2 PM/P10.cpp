#include<iostream> 
using namespace std;
class Test
{
    int x; 
    public:
    Test(float ss)
    {
        cout<<"Float" <<endl;
    }
    Test(int xx)
    {
        cout<< "Int" << endl;
    }
    Test(char ch)
    {
        cout<< "Char" << endl;
    }
    ~Test() 
    {
        cout<< "Final";
    }
};
int main()
{
    Test *ptr = new Test('B');
    delete ptr;
    //Test ob(10.5f);
    return 0; 
}
