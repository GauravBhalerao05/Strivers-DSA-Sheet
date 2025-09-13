#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //vector initialisation
    vector<char> Ch;

    //insertion using push_back
    Ch.push_back('E');
    Ch.push_back('D');
    Ch.push_back('C');
    Ch.push_back('B');
    Ch.push_back('A');

    //iterator to first element
    vector<char>::iterator it = Ch.begin();
    for(int i = 0; i<Ch.size(); i++)
    {
        cout<<(*it)<<"\t";
        it++;
    }cout<<"\n";

    //iterator to last element
    it = Ch.end();

    //inserting to a specified location
    it = Ch.begin();
    Ch.insert(it,'G');
    for(int i = 0; i<Ch.size(); i++)
    {
        cout<<(*it)<<"\t";
        it++;
    }cout<<"\n";

    //erasing a perticular element
    it = Ch.begin();
    Ch.erase(it);
    for(int i = 0; i<Ch.size(); i++)
    {
        cout<<(*it)<<"\t";
        it++;
    }cout<<"\n";

    //to delete last element 
    Ch.pop_back();   
    it = Ch.begin();
    for(int i = 0; i<Ch.size(); i++)
    {
        cout<<(*it)<<"\t";
        it++;
    }cout<<"\n"; 

    //reference to first element
    char &Front = Ch.front();
    cout<<"first element is: "<<Front<<"\n";

    //reference to the last element
    char &Back = Ch.back();
    cout<<"Last element is: "<<Back<<"\n";

    //Size of the vector
    int iSize = Ch.size();
    cout<<"Size of the vector is: "<<iSize<<"\n";

    //deleting all elements
    Ch.clear();

    //to check the given vector is empty
    if(Ch.empty())
    {
        cout<<"The vector is empty"<<"\n";
    }
    else
    {
        cout<<"the vector is not empty"<<"\n";
    }

    return 0;
}