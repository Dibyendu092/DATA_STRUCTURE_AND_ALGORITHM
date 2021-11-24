
#include<bits/stdc++.h>

using namespace std;
int power(int x, int y)
{   
    if(y == 0)
    {
        return 1;
    }
    int temp = power(x, y/2);
    temp = temp* temp;
    if(y %2 == 0)
    {
        return temp;
    }
    else
    {
        return temp*x;
    }
}

int main()
{
    //o(logn) sol
    int base,po;
    cin >>base >> po;
    cout<<power(base,po)<<endl;
    
}
