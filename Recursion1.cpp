#include<iostream>
using namespace std;

class Solution 
{
  public:
    int iCount = 0;
    void printNumbers(int n) 
    {
        if((n<1) || (n>100))
        {
            cout<<"Enter a number between 1 to 100"<<"\n";
            return;
        }
        
        if(iCount == n)
        {   return; }
        iCount++;
        cout<<(iCount)<<"\n";
        printNumbers(n);
    }
};

int main()
{
    int iNo = 0;

    cout<<"Enter a number: ";
    cin>>iNo;

    Solution obj;
    obj.printNumbers(iNo);

    return 0;
}