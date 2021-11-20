#include<bits/stdc++.h>

using namespace std;
int digitcount(int n)
{
    if(n == 0)
    {
        return 0;
    }
    else
    {
        return (1+digitcount(n/10));
    }
}


int main()
{
   int n;
   cin >>n;
   int d = digitcount(n);
   cout<<d<<endl;
}