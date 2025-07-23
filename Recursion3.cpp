#include<iostream>
using namespace std;

class Solution 
{
  public:
    int iSum = 0, iCount = 0;

    int NnumbersSum(int N)
    {
        iCount++;

        iSum = iSum + iCount;

        if(iCount < N)
        {   NnumbersSum(N); }

        return iSum;
	}
};

int main()
{
    int iNo = 0, iRes = 0;

    cout<<"Enter a number: ";
    cin>>iNo;

    if((iNo<1) || (iNo>100))
    {
        cout<<"Enter a number between 1 to 100"<<"\n";
        return 0;
    }

    Solution obj;
    iRes = obj.NnumbersSum(iNo);

    cout<<iRes<<"\n";

    return 0;
}