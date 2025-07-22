#include<iostream>
using namespace std;

class Solution {
public:
    int isPalindrome(int n) {
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

        if(n == iNumNew)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    int iNum,iRes = 0;

    cout<<"Enter the number: ";
    cin>>iNum;

    Solution obj;
    iRes = obj.isPalindrome(iNum);

    if(iRes == 1)
    {
        cout<<"The given number is Palindrome.";
    }
    else
    {
        cout<<"The given number is not Palindrome.";
    }

    return 0;
}