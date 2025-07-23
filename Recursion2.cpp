#include<iostream>
using namespace std;

class Solution 
{
  public:
    void printNumbers(int n) 
    {
        cout<<n<<"\n";
        
        if(n >= 1)
        {
            printNumbers(n-1);
        }
    }
};

int main()
{
    int iNo = 0;

    cout<<"Enter a number: ";
    cin>>iNo;

    if((iNo<1) || (iNo>100))
    {
        cout<<"Enter a number between 1 to 100"<<"\n";
        return 0;
    }

    Solution obj;
    obj.printNumbers(iNo);

    return 0;
}