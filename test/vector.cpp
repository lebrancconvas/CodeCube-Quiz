#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {1,21,23,3,2,3,45,21,2};
    sort(arr.begin(),arr.end());
    for(int a: arr)
    {
        cout << a << " ";
    }
}