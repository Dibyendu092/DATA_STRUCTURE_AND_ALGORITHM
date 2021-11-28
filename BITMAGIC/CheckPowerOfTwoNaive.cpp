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
 bool CheckPowerOfTwoNaive(int n)
 {
     if(n == 0)
     {
         return false;
     }
     else
     {
         while(n != 1)
         {
             if(n % 2 != 0)
             {
                 return false;
             }
             n = n/2;
         }
         return true;
     }
 }
void solve()
{
    int n;
    cin >>n;
    if(CheckPowerOfTwoNaive(n))
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    FASTIO
    tc
    return 0;
}