#include<bits/stdc++.h>

using namespace std;

int palindromecheck(int n)
{
   int rem,rev=0;
   while(n !=0)
   {
       rem = n%10;
       rev = rev*10+rem;
       n = n/10;
   }
   return rev;
}

int main()
{
   int n;
   cin >>n;
   int d = palindromecheck(n);
   if(n == d)
   {
       cout<<"IT IS A PALINDROME NO"<<endl;
   }
   else
   {
      cout<<"IT IS NOT A PALINDROME NO"<<endl;
   }
}