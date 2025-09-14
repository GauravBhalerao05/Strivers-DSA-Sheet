#include<iostream>
#include<map>
using namespace std;

int main()
{
    //initialisation
    map<char,int> m;

    //insertion
    m['A'] = 0;
    m['B'] = 1;
    m['C'] = 2;
    m['D'] = 3;
    m['E'] = 4;
    m['F'] = 5;

    //iterator to begining
    map<char,int>::iterator it;
    it = m.begin();
    cout<<"First element of map is: "<<(*it).second<<"\n";

    //printing all elements in map
    it = m.begin();
    cout<<"Key  =>  Value"<<"\n";
    for(int iCnt = 0; iCnt<m.size(); iCnt++)
    {
        cout<<" "<<(*it).first<<"   =>    "<<(*it).second<<"\n";
        it++;
    }cout<<"\n";

    // usage of count function
    if(m.count('C'))
    {
        cout<<"C is present"<<"\n";
    }
    else
    {
        cout<<"C is not present"<<"\n";
    }

    // finding a element in an unordered set
    it = m.find('D');
    cout<<(*it).first<<" is found"<<"\n";

    // to check unordered set is empty
    if(m.empty())
    {
        cout<<"Map is empty"<<"\n";
    }
    else
    {
        cout<<"Map is not empty"<<"\n";
    }

    // erasing a element
    m.erase('D');
    it = m.begin();
    cout<<"Key  =>  Value"<<"\n";
    for(int iCnt = 0; iCnt<m.size(); iCnt++)
    {
        cout<<" "<<(*it).first<<"   =>    "<<(*it).second<<"\n";
        it++;
    }cout<<"\n";

    // erasing in a range
    auto it1 = m.find('C');
    auto it2 = m.end();
    m.erase(it1,it2);
    it = m.begin();
    cout<<"Key  =>  Value"<<"\n";
    for(int iCnt = 0; iCnt<m.size(); iCnt++)
    {
        cout<<" "<<(*it).first<<"   =>    "<<(*it).second<<"\n";
        it++;
    }cout<<"\n";

    // clear function
    m.clear();
    it = m.begin();
    cout<<"Key  =>  Value"<<"\n";
    for(int iCnt = 0; iCnt<m.size(); iCnt++)
    {
        cout<<" "<<(*it).first<<"   =>    "<<(*it).second<<"\n";
        it++;
    }cout<<"\n";

    return 0;
}