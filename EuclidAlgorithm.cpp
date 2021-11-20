#include<bits/stdc++.h>

using namespace std;
int gcd(int a, int b)
{
    while(a!=b)
    {
        if(b >a)
        {
            b = b-a;
        }
        else
        {
            a = a-b;
        }
    }
    return a;
}

int main()
{
   int a, b;
   cin >> a >>b;
   int d= gcd(a,b);
   cout<<d<<endl;
}