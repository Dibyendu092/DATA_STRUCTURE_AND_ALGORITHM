#include<bits/stdc++.h>

using namespace std;
int trailingZero(int n)
{
    int up=0;
    for(int i=5; i<=n; i=i*5)
    {
        up = up + n/i;
    }
    return up;
}

int main()
{
   int n;
   cin >>n;
   int d = trailingZero(n);
   cout<<d<<endl;
}