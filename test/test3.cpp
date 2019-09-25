#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr, arr + n, compare);
    for(int a: arr)
    {
        printf("%d ", a);
    }
}