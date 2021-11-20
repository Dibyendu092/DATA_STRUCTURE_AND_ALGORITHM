#include<bits/stdc++.h>

using namespace std;

int main()
{
   int a, b;
   cin >> a >>b;
   int d = max(a, b);
   while(1)
   {
     if(d % a == 0 && d % b == 0)
     {
         break;
     }
     else
     {
         d++;
     }
   }
   cout<<d<<endl;
}