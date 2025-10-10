#include<iostream>
using namespace std;

class Base  //8
{
    public:
        int i,j;

        void fun()
        {
            cout<<"Inside base fun\n";
        }
};

class Derived : public Base     //12
{
    public:
    int x;

    void Gun()
    {
        cout<<"Inside derived gun\n";
    }


};
int main()
{

    Base bobj;
    Derived dobj;

    bobj.fun();
    
    dobj.fun();
    dobj.Gun();

    return 0;
}