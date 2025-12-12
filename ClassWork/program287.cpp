#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 0;       // Static storage class  // preserve the value
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();
}

int main()
{
    Display();

    return 0;
}