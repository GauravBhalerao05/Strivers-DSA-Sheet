#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> A;
    A.insert(4);
    A.insert(7);
    A.insert(10);
    A.insert(11);
    A.insert(11);
    A.insert(30);
    A.insert(40);


    //size of an unordered_set
    cout<<"Size of the Unordered_Set is: "<<A.size()<<"\n";


    unordered_set<int>::iterator it = A.begin();
    it = A.end();   

    for(it = A.begin(); it != A.end(); it++)
    {
        cout<<*it<<"\n";
    }
    cout<<"\n";

    // count function
    if(A.count(7))
    {   cout<<"True"<<"\n";    }
    else
    {   cout<<"False"<<"\n";   }

    //find function
    if(A.find(4)!=A.end())
    {
        cout<<"True"<<"\n";
    }
    else
    {
        cout<<"False"<<"\n";
    }

    cout<<"\n";

    //erase function for deleting single element
    A.erase(10);
    for(it = A.begin(); it != A.end(); it++)
    {
        cout<<*it<<"\n";
    }

    //erase function for deleting elements in a range
    cout<<"\n";
    it = A.find(11);
    A.erase(A.begin(),it);
    for(it = A.begin(); it != A.end(); it++)
    {
        cout<<*it<<"\n";
    }

    //to check if it is empty
    if(A.empty())
    {
        cout<<"Unodered_Set is empty"<<"\n";
    }
    else
    {
        cout<<"Unodered_Set is not empty"<<"\n";
    }

    // clear function
    A.clear();

    return 0;
}