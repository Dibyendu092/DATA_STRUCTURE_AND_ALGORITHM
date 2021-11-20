#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a, b;
   cin >> a >>b;
   int d = min(a, b);
   while(1)
   {
     if(a %d == 0 && b %d == 0)
     {
         break;
     }
     else
     {
         d--;
     }
   }
   cout<<d<<endl;
}