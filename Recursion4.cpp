#include<iostream>
#include<vector>
using namespace std;

class Solution 
{
  public:
    int iCount = 0;

    void Input(int arr[], int str, int end)
    {
        cout<<"Enter the "<<(str+1)<<" number: ";
        cin>>arr[str];

        if(str<(end-1))
        {   Input(arr,(str+1),end);  }
    }

    void reverse(int arr[], int str, int end)
    {
        if(str>=end)
        {   return; }

        int temp = arr[str];
        arr[str] = arr[end];
        arr[end] = temp;

        reverse(arr,str+1,end-1);
    }

    void Output(int arr[], int str, int end)
    {
        if(str>=end)
        {   return; 
        }
        cout<<arr[str];

        if(str != (end-1))
        {   cout<<",";  }

        Output(arr,str+1,end);
    }
};

int main()
{
    int iNo = 0;

    cout<<"Enter the count of number you want to enter: ";
    cin>>iNo;

    int *Arr = new int[iNo];

    if( (iNo<1) || (iNo>10000) )
    {
        cout<<"Enter the number b/w 1 to 10,000"<<"\n";
        return 0;
    }

    Solution obj;
    obj.Input(Arr,0,iNo);
    obj.reverse(Arr,0,iNo-1);
    
    cout<<"[";
    obj.Output(Arr,0,iNo);
    cout<<"]"<<"\n";

    return 0;
}