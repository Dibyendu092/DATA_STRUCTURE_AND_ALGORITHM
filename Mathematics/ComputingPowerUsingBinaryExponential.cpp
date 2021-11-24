#include<bits/stdc++.h>

using namespace std;
int power(int x, int y)
{   
    int res=1;
    while(y>0)
    {
        if(y & 1)
        {
            res = (res*x);
        }
        x = (x*x);
        y= y>>1;
    }
    return res;
}

int main()
{
    //o(logn) sol
    int base,po;
    cin >>base >> po;
    cout<<power(base,po)<<endl;
    
}
