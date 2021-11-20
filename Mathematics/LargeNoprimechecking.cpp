#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int flag =1;
    for(int i=2; i<=sqrt(n); i++)
    {
        if( n == 1)
        {
            flag = 0;
        }
        else if(n % 2 == 0 || n % 3 == 0)
        {
           flag = 0;
        }
        else if(n  == 2 || n == 3)
        {
           flag = 1;
        }
        else
        {
            for(int i=5; i<= sqrt(n); i += 6)
            {
                if((n % i) == 0 || (n% (i+2)) == 0)
                {
                    flag = 0;
                }
            }
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