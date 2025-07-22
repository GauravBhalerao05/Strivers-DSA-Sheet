#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) 
    {
        int iNo = n;
        int iDigit = 0,iCount = 0,iNumNew = 0;
        int iPov = 1;

        while(iNo!=0)
        {
            iCount++;
            iNo = iNo/10;
        }

        iNo = n;
        while(iNo!=0)
        {
            iPov = 1;
            iDigit = iNo%10;
            for(int i = 0; i<iCount; i++)
            {
                iPov = iPov*iDigit;
            }
            iNumNew = iNumNew + iPov;
            iNo = iNo/10;
        }

        if(iNumNew == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int iNum = 0;
    bool bB = false;

    cout<<"Enter the number: ";
    cin>>iNum;

    Solution obj;
    bB = obj.isArmstrong(iNum);

    if(bB == true)
    {
        cout<<"True"<<"\n";
    }
    else
    {
        cout<<"False"<<"\n";
    }

    return 0;
}