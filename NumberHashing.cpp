#include<iostream>
using namespace std;

int main()
{
    int iNo = 0;
    cout<<"Enter count of total number of numbers: ";
    cin>>iNo;

    int Arr[iNo];
    cout<<"Enter the numbers: "<<"\n";
    for(int i = 0; i<iNo; i++)
    {
        cin>>Arr[i];
    }

    int Query[13] = {0};
    for(int i = 0; i<iNo; i++)
    {
        Query[Arr[i]] += 1;
    }

    int n = 0;
    cout<<"Enter the number whose freq. you want to see: ";
    cin>>n;
    cout<<"the freq. is: "<<Query[n]<<"\n";

    return 0;
}