#include<iostream>
#include<list>
using namespace std;

int main()
{
    // List declaration
    list<int> li;

    // Insertion in list
    li.push_front(1);
    li.push_back(8);
    li.push_back(3);
    li.push_back(10);
    li.push_back(2);
    li.push_back(6);

    // Printing all elements
    list<int>::iterator it = li.begin();
    for(int i = 0; i<(li.size()); i++)
    {
        cout<<*it<<"\t";
        it++;
    }cout<<"\n";

    // Access first element
    int First = li.front();
    cout<<"First element is: "<<First<<"\n";

    // insertion at given location 
    it = li.begin();
    it++;
    li.insert(it,3);
    cout<<"Inserting 3 at 2nd pos"<<"\n";
    // Printing all elements
    it = li.begin();
    for(int i = 0; i<(li.size()); i++)
    {
        cout<<*it<<"\t";
        it++;
    }cout<<"\n";

    // Erase function
    it = li.begin();
    it++;it++;
    li.erase(it);
    cout<<"Erasing at 3rd pos"<<"\n";
    // Printing all elements
    it = li.begin();
    for(int i = 0; i<(li.size()); i++)
    {
        cout<<*it<<"\t";
        it++;
    }cout<<"\n";

    // Remove function
    li.remove(3);
    cout<<"Removing 3"<<"\n";
    // Printing all elements
    it = li.begin();
    for(int i = 0; i<(li.size()); i++)
    {
        cout<<*it<<"\t";
        it++;
    }cout<<"\n";

    // Sorting in Asce
    li.sort();
    cout<<"Sorting list"<<"\n";
    // Printing all elements
    it = li.begin();
    for(int i = 0; i<(li.size()); i++)
    {
        cout<<*it<<"\t";
        it++;
    }cout<<"\n";

    // Reverse in list
    li.reverse();
    cout<<"Reversing list"<<"\n";
    // Printing all elements
    it = li.begin();
    for(int i = 0; i<(li.size()); i++)
    {
        cout<<*it<<"\t";
        it++;
    }cout<<"\n";

    li.clear();
    cout<<"Clearing list";

    return 0;
}