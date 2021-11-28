#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >>n >>k;
    if(1 & (n>>(k-1)) == 1)
    {
        cout<<"Kth bit is set"<<endl;
    }
    else
    {
        cout<<"Kth bit is not set"<<endl;
    }
    return 0;
}