
#include<bits/stdc++.h>

using namespace std;
int power(int x, int y)
{   
    int res=1;
    for(int i=1; i<=y; i++)
    {
        res = res*x;
    }
    return res;
}

int main()
{
    //o(n) sol
    int base,po;
    cin >>base >> po;
    cout<<power(base,po)<<endl;
    
}
