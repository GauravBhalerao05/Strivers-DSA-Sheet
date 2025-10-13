#include <iostream>
#include <vector>
using namespace std;

/* 
    Time Complexity: O(N log(N))
    Space Complexity: O(N)
*/

void Conquere(vector<int> &arr, int str, int mid, int end)
{
    vector<int> temp;
    int i = str, j = mid+1;

    while (i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while(i<=mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while(j<=end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for(int iCnt = 0; iCnt<temp.size(); iCnt++)
    {
        arr[iCnt+str] = temp[iCnt];
    }
}

void Divide(vector<int> &arr, int str, int end)
{
    if (str < end)
    {
        int mid = str + (end - str) / 2;

        // Left Half
        Divide(arr, str, mid);

        // Right Half
        Divide(arr, (mid + 1), end);

        Conquere(arr, str, mid, end);
    }
}

int main()
{
    vector<int> vec = {5,4,3,10,1};

    Divide(vec, 0, (vec.size()-1));

    for(int i= 0; i<vec.size(); i++)
    {
        cout<<vec[i]<<"\t";
    }cout<<"\n";

    return 0;
}