#include<bits/stdc++.h>

using namespace std;
int digitcount(int n)
{
    return floor(log10(n)+1);
}


int main()
{
   int n;
   cin >>n;
   int d = digitcount(n);
   cout<<d<<endl;
}