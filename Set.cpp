#include<iostream>
#include<set>
using namespace std;

int main()
{
    int iCount = 0;
    char c,c1 = '\0';

    // Declaration
    set<char> cCh;
    set<char>::iterator it;

    cout<<"Enter the count of elements you want to insert: ";
    cin>>iCount;

    // Insertion
    for(int i = 0; i<iCount; i++)
    {
        cout<<"Enter the "<<i+1<<" character: ";
        cin>>c;
        cCh.insert(c);
    }

    // diaplay using iterator
    for(it = cCh.begin(); it!=cCh.end(); it++)
    {
        cout<<*it<<" ";
    }   cout<<"\n"; 

    // searching a element in the container
    cout<<"Enter the element you want to see is it present: ";
    cin>>c;
    if(cCh.count(c)==1)
    {   cout<<"It is present"<<"\n";  }
    else
    {   cout<<"It is not present"<<"\n";  }

    // Finding a element
    cout<<"Enter the element you want to see is it present: ";
    cin>>c;
    if(cCh.find(c)!=cCh.end())
    {   cout<<"It is present"<<"\n";  }
    else
    {   cout<<"It is not present"<<"\n";  }

    // To delete an element
    cout<<"Enter the element you want to delete: ";
    cin>>c;
    cCh.erase(c);

    // to delete elements in an range
    it = cCh.begin();
    cout<<"Enter the element from where you want to delete: ";
    cin>>c;
    cout<<"Enter the element till where you want to delete: ";
    cin>>c1;
    cCh.erase(cCh.find(c),cCh.find(c1));

    // clearing all elements
    cCh.clear();

    return 0;
}