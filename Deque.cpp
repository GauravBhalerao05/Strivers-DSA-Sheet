#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //deque initialisation
    deque<int> d;

    //insertion in deque
    d.push_back(2);
    d.push_front(1);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    d.push_back(6);
    d.push_back(7);

    // Printing all elements
    for(int i = 0; i<(d.size()); i++)
    {
        cout<<d.at(i)<<"\t";
    }cout<<"\n";

    // Deletion from back
    d.pop_back();
    cout<<"Last element poped"<<"\n";

    // Deletion from front
    d.pop_front();
    cout<<"First element poped"<<"\n";

    // Accessing first element in deque
    int iRef = d.front();
    cout<<"Front element is: "<<iRef<<"\n";

    // Accessing last element in deque
    iRef = d.back();
    cout<<"Last element is: "<<iRef<<"\n";

    // Accessing element at given index
    int iNo = (d.size()) / 2;
    cout<<"Middle element is: "<<d.at(iNo)<<"\n";

    // Printing all elements
    for(int i = 0; i<(d.size()); i++)
    {
        cout<<d.at(i)<<"\t";
    }cout<<"\n";

    if(d.empty())
    {
        cout<<"Deque is empty"<<"\n";
    }
    else
    {
        cout<<"Deque is not empty"<<"\n";      
    }

    // Clearing deque
    d.clear();
    cout<<"Deque is cleared"<<"\n";

    return 0;
}