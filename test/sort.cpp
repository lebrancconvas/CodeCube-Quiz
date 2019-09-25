#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[9] = {1,32,1,2,43,54,21,3,32};
    sort(arr,arr+9);
    for(int i = 0; i < 9; i++)
    {
        printf("%d ",arr[i]);
    }
}