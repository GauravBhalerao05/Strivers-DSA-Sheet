#include<iostream>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int iCount = 0;
        int iNo = n;

        if(n == 0)
        {
            return 1;
        }

        while(iNo!=0)
        {
            iCount++;
            iNo = iNo/10;
        }

        return iCount;
    }
};

int main()
{
    int iNum,iRes = 0;

    cout<<"Enter the number: ";
    cin>>iNum;

    Solution obj;
    iRes = obj.countDigit(iNum);

    cout<<"Total number of digits in "<<iNum<<" is: "<<iRes<<"\n";

    return 0;
}