// Input : 7891
// Output : 25

#include<iostream>
using namespace std;

int SumFactors(int iNo)
{
    static int iCnt = 1, iSum = 0;

    if(iCnt <= (iNo / 2))
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }

        iCnt++;

        SumFactors(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : ";
    cin>>iValue;

    iRet = SumFactors(iValue);

    cout<<"Sum of factors is : " << iRet;

    return 0;
}