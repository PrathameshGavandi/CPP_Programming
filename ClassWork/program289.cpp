#include<iostream>
using namespace std;

void auto_demo()    //Not preserving old value in stack frame
{
    auto i = 1;
    cout<<"auto_demo : "<<i<<"\n";
    i++;
}

void static_demo()  //Preserves the old value in stack frame
{
    static int  i = 1;
    cout<<"static_demo : "<<i<<"\n";
    i++;
}

int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();


    static_demo();
    static_demo();
    static_demo();
    static_demo();

    return 0;
}