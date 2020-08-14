#include<iostream>
using namespace std; 
class Test
{
    int x; // private data member
    public:
    Test(int xx, float yy) // constructor with two arguments
    {
        cout<<char(yy);
    } 
};
int main()
{
	Test ob(35, 99.50f);
    //Test *p = new Test(35, 99.50f);
    return 0;
}
/*
48 - 57 => 0 to 9
65 - 90 => A to Z
97 - 122 => a to z
*/
/*
new operator is used to allocate the memory to the pointer variable.
delete operator is used to de-allocate the memory which was allocated
by the new operator.
*/
