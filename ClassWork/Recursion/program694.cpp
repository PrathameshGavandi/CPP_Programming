#include<iostream>

using namespace std;

void Display(int iNo)
{
    if(iNo >= 1 )
    {
        cout<<iNo<<"\t";

        Display(--iNo);
    }
    else
    {
        cout<<"\n";
    }

    
}
int main()
{

    int iValue = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}