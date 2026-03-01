// Input : 7891
// Output : 25

#include<iostream>
using namespace std;

bool CheckPerfect(int iNo)
{
    static int iCnt = 1, iSum = 0;

    if(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }

        iCnt++;

        CheckPerfect(iNo);
    }

    return (iSum == iNo);
    
}

int main()
{
    int iValue = 0; 
    bool bRet = false;

    cout<<"Enter number : ";
    cin>>iValue;

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        cout<<"It is an perfect number ";
    }
    else
    {
        cout<<"It is not an perfect number ";
    }

    return 0;
}