#include<iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int iDigit,iNumNew = 0;
        int iNo = n;

        if(n == 0)
        {
            return 1;
        }

        while(iNo!=0)
        {
            iDigit = iNo % 10;
            iNumNew = iNumNew*10 + iDigit;
            iNo = iNo/10;
        }

        return iNumNew;
    }
};

int main()
{
    int iNum,iRes = 0;

    cout<<"Enter the number: ";
    cin>>iNum;

    Solution obj;
    iRes = obj.reverseNumber(iNum);

    cout<<"The number after reversing is: "<<iRes<<"\n";

    return 0;
}