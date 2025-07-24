#include<iostream>
#include<string>
using namespace std;

class Solution 
{
  public:
    bool palindromeCheck(string& s, int iCnt, int iEnd)
    {
        if(iCnt>=iEnd)
        {
            return true;
        }

        if(s[iCnt]!=s[iEnd])
        {
            return false;
        }

        return palindromeCheck(s,(iCnt+1),(iEnd-1));
    }
};

int main()
{
    string s;
    bool Flag = false;

    cout<<"Enter a string: ";
    cin>>s;

    Solution obj;
    Flag = obj.palindromeCheck(s,0,(s.length()-1));

    if(Flag)
    {
        cout<<"It is a palindrome"<<"\n";
    }
    else
    {
        cout<<"It is not a palindrome"<<"\n";
    }

    return 0;
}