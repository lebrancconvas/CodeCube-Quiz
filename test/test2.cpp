#include <iostream>
using namespace std;

int main()
{
    float x(100);
    float b = x(100);

    cout << b;
}

float x(float n)
{
    float a = 100;
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return (1/2)*(x(n - 1) + (a/(x(n - 1))));
    }
}
