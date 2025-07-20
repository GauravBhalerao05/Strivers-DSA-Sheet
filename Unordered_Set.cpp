#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int iCount,iValue = 0;
    unordered_set<int> iArr;
    unordered_set<int>::iterator Pointer;

    // Insertion
    cout<<"Enter the count of number's you want to Insert : ";
    cin>>iCount;
    for(int iCnt = 0; iCnt<iCount; iCnt++)
    {
        cout<<"Enter the "<<iCnt+1<<" number : ";
        cin>>iValue;
        iArr.insert(iValue);
    }

    // pointer to begin
    Pointer = iArr.begin();
    cout<<"First element is : "<<*Pointer<<"\n";

    // printing all elements in an unordered set
    cout<<"Elements in the unordered set are: ";
    for (auto it = iArr.begin(); it != iArr.end(); it++) 
    {
        cout << *it << " ";
    }cout<<"\n";

    // usage of count function
    iValue = iArr.count(2);
    if(iValue == 1)
    {
        cout<<"Element is present"<<"\n";
    }
    else
    {
        cout<<"Element is not present"<<"\n";
    }

    // finding a element in an unordered set
    if(iArr.find(2) != iArr.end())
    {
        cout<<"2 is present in the elements"<<"\n";
    }

    // size of unordered set
    cout<<"Total elements are: "<<iArr.size()<<"\n";

    // to check unordered set is empty
    if(iArr.empty() == 1)
    {
        cout<<"Unordered set is empty";
    }
    else
    {
        cout<<"Unordered set is not empty";
    }

    // erasing a element
    iArr.erase(iArr.begin());

    // erasing in a range
    iArr.erase(iArr.begin(), iArr.end());

    // clear function
    iArr.clear();

    return 0;
}