#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int flag =1;
    for(int i=2; i<n; i++)
    {
        if(n % i == 0)
        {
           flag = 0;
        }
    }
    if(flag == 0)
    {
        cout<<"IT IS NOT A PRIME NO"<<endl;
    }
    else
    {
        cout<<"IT IS  A PRIME NO"<<endl;
    }
}