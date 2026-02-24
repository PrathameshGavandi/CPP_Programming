#include<iostream>

using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    iCnt = iNo;

    if(iCnt >= 1 )
    {
        cout<<iCnt<<"\t";
        iCnt--;

        
    }
    
        cout<<"\n";
}
int main()
{

    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}