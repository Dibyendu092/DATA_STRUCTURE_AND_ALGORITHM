#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >>n >>k;
    if(n & (1<<(k-1)) != 0)
    {
        cout<<"Kth bit is set"<<endl;
    }
    else
    {
        cout<<"Kth bit is not set"<<endl;
    }
    return 0;
}