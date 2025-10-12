#include<iostream>
using namespace std;

class Demo
{
    public:
    void display()
    {
        cout<<"Inside display method\n";
    }
};

int main()
{
    Demo dobj;

    cout<<sizeof(dobj);

    return 0;
}