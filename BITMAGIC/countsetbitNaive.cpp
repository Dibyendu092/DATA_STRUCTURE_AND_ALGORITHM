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
 int countSetBitsNaive(int n)
 {
     //take o(n) time
     int c=0;
     while(n >0)
     {
         if(n % 2 != 0)
         {
             c++;
         }
         n = n/2;
     }
     return c;
 }
void solve()
{
    int n;
    cin >>n;
    cout<< countSetBitsNaive(n)<<endl;
}
int main(){
    FASTIO
    tc
    return 0;
}