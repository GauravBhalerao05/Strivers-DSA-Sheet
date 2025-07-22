#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
public:
    int GCD(int n1,int n2) 
    {
        vector<int> Arr1,Arr2,Arr3;
        vector<int>::iterator it1,it2;

        for(int i = 1; i<=(n1/2); i++)
        {
            if((n1%i) == 0)
            {
                Arr1.push_back(i);
            }
        }

        for(int i = 1; i<(n2/2); i++)
        {
            if((n2%i) == 0)
            {
                Arr2.push_back(i);
            }
        }

        for(it1 = Arr1.begin(); it1!=Arr1.end(); it1++)
        {
            for(it2 = Arr2.begin(); it2!=Arr2.end(); it2++)
            {
                if(*it1 == *it2)
                {
                    Arr3.push_back(*it1);
                }
            }
        }

        it1 = std::max_element(Arr3.begin(),Arr3.end());
        
        return (*it1);
    }
};

int main()
{
    int iNum1,iNum2,iRes = 0;

    cout<<"Enter the number 1: ";
    cin>>iNum1;
    cout<<"Enter the number 2: ";
    cin>>iNum2;

    Solution obj;
    iRes = obj.GCD(iNum1,iNum2);

    cout<<"The greatest common divisor of the numbers is: "<<iRes<<"\n";

    return 0;
}