#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t;cin >> t;while (t--){solve();}
#define char2Int(c) (c-'0')//charecter to int
#define all(x) x.begin(), x.end()//sort a vector
#define sortall(x) sort(all(x))
#define FASTIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
bool checkKthbitSetOrNot(int n , int k)
{
   if(n & (1 << (k-1)) != 0)
   {
     return true;
   }
   else
   {
     return false;
   }
}
int countSetBitsBrainKerningam(int n)
{
     //take o(setbitcount not total bits count) time
     int c=0;
     while(n >0)
     {
         
         n = (n & (n-1));
         c++;
     }
     return c;
}
bool isPowerofTwo(long long n)
{
         
        if(n == 0)
        {
            return false;
        }
        return ((n & (n-1)) == 0);
        
}
void solve()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n; i++)
    {
        cin >>arr[i];
    }
    int res =0;
    for(int i=0;i<n; i++)
    {
       
       for(int i=0;i<n; i++)
       {
           res = res ^ arr[i];
       }
      
    }
     cout<<res<<endl;
    
}
int main(){
    FASTIO
    tc
    return 0;
}