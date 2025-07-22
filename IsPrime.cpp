#include<iostream>
using namespace std;

class Solution 
{
public:
    bool isPrime(int n) 
    {
        bool Flag = true;

        //your code goes here
        for(int i = 2; i<n; i++)
        {
            if((n%i) == 0)
            {
                Flag =  false;
            }
        }

        return Flag;
    }
};

int main()
{
    int iNum = 0;
    bool Res = false;

    cout<<"Enter the number: ";
    cin>>iNum;

    Solution obj;
    Res = obj.isPrime(iNum);
    
    if(Res == true)
    {
        cout<<"It is Prime";
    }
    else
    {
        cout<<"It is not Prime";
    }

    return 0;
}