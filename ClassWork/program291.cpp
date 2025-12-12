#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;    //stores the value in static region & preverse the old value also
    auto i = 1;

    if(iCnt <= 3)
    {
        cout<<"Jay Ganesh..."<<iCnt<<" "<<i<<"\n";
        iCnt++;     //Static
        i++;        //auto
        Display();
    }
}

int main()
{
    cout<<"Inside main\n";
    Display();
    cout<<"End of main\n";
    return 0;
}