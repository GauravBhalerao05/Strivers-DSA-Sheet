#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //initialisation
    queue<int> q;

    //insertion
    for(int iCnt = 0; iCnt<6; iCnt++)
    {
        q.push(iCnt);
    }

    //access begining element
    cout<<"First element is: "<<q.front()<<"\n";
    
    //delete first element
    q.pop();
    cout<<"First element is deleted"<<"\n";

    //last element in queue
    cout<<"Last element is: "<<q.back()<<"\n";

    //to check is queue empty
    if(q.empty())
    {
        cout<<"It is empty"<<"\n";
    }
    else
    {
        cout<<"It is not empty"<<"\n";
    }
    
    //to check size of queue
    cout<<"Size of queue is: "<<q.size()<<"\n";

    return 0;
}