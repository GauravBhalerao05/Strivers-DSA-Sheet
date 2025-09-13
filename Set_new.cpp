#include<iostream>
#include<set>
using namespace std;

int main()
{
    //set initialisation
    set<int> s;

    //insert in set
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);
    s.insert(8);
    s.insert(9);

    //iterator to first element
    auto it = s.begin();
    for(int iCnt = 0; iCnt<s.size(); iCnt++)
    {
        cout<<(*it)<<"\t";
        it++;
    }cout<<"\n";

    //iterator to element next to last element
    it = s.end();

    //to check element is present or not
    if(s.count(5))
    {
        cout<<"Element is present"<<"\n";
    }
    else
    {
        cout<<"element is not present"<<"\n";
    }

    //finding an element
    it = s.find(2);
    cout<<(*it)<<"\n";

    //to delete an element or range of element
    s.erase(3);
    it = s.find(6);
    auto it2 = s.find(9);
    s.erase(it,it2);
    it = s.begin();
    for(int iCnt = 0; iCnt<s.size(); iCnt++)
    {
        cout<<(*it)<<"\t";
        it++;
    }cout<<"\n";

    //to check is it empty
    if(s.empty())
    {
        cout<<"The set is empty"<<"\n";
    }
    else
    {
        cout<<"The set is not empty"<<"\n";
    }

    //clearing set
    s.clear();

    return 0;
}