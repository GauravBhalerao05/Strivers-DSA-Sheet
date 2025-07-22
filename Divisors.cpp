#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
public:
    vector<int> divisors(int n) 
    {
        vector<int> Arr;

        for(int i = 1; i<=n; i++)
        {
            if((n%i) == 0)
            {
                Arr.push_back(i);
            }
        }

        return Arr;
    }
};

int main()
{
    int iNum = 0;
    vector<int> Arr;

    cout<<"Enter the number: ";
    cin>>iNum;

    Solution obj;
    Arr = obj.divisors(iNum);

    cout<<"[";
    for(int i = 0; i<Arr.size(); i++)
    {
        if(i == (Arr.size()-1))
        {   cout<<Arr[i];   }
        else
        {
            cout<<Arr[i]<<",";
        }
    }
    cout<<"]";

    return 0;
}