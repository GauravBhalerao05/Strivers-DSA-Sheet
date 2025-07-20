#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<string> iArr;
    vector<string>::iterator it;

    it = iArr.begin();

    //Insertion using insert fxn
    iArr.insert(it,"Manoj");
    it = iArr.begin();

    //Insertion using push_back fxn
    iArr.push_back("Aditya");
    iArr.push_back("Shree");
    iArr.push_back("Tejas");
    it = iArr.begin();
    it++;

    //Erasing a element
    it = iArr.erase(--it);

    //Pop_back fxn
    iArr.pop_back();

    // front fxn
    string& iArrNw = iArr.front();
    cout<<iArrNw<<"\n";

    //back fxn
    string& iString = iArr.back();
    cout<<iString<<"\n";

    //to check is vector empty or not
    int iNo = iArr.empty();
    if(iNo == 1)
    {
        cout<<"Vector is empty"<<"\n";
    }
    else
    {
        cout<<"Vector is not empty"<<"\n";
    }

    //size fxn
    int iNo2 = iArr.size();
    cout<<"Current size of vector is: "<<iNo2<<"\n";

    cout<<*it<<"\n";

    // to clear all elements
    iArr.clear();

    return 0;
}

