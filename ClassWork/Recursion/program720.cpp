#include<iostream>
#include<stdio.h>

using namespace std;

int CountCaptial(char *str)
{
    static int iCount = 0;

    if (*str != '\0')
    {
        if((*str >= 'A') && (*str <='Z'))
        {
            iCount++;
        }
        str++;

        CountCaptial(str);
    }

    return iCount;
    
}

int main()
{
    int iRet = 0;
    char Arr[50] = { '\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountCaptial(Arr);

    printf("Capital count is : %d\n",iRet);

    return 0;
}