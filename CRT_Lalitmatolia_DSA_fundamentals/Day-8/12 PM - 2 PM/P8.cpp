#include<iostream>
using namespace std;
class Base
{   
    public:
    Base()
    {
        cout<< "Base OK. "; 
    }
};
class Derived: public Base
{
    public:
    Derived()
    { 
        cout<< "Derived OK. "; 
    }
    ~Derived()
    { 
        cout<< "Derived DEL. "; 
    }
};
int main()
{
    Base    ob;
    Derived od;
    od.~Derived();
    return 0;
}
