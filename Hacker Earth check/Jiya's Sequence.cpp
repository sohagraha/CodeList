#include <bits/stdc++.h>
using namespace std;


int main()
{
  long long int t,tt,seq;
  cin >> t;
  while(t--)
  {
   long long int mul = 1;
   cin >> tt;
   while(tt--)
   {
      cin >> seq;
      mul = mul*seq;
   }
   //cout << mul;
   if((mul%10)==2 || (mul%10)==3 || (mul%10)==5)
   {
      cout << "YES" << endl;
   }
   else 
    cout << "NO" << endl;
  }
}

// Jiya's Sequence
// https://www.hackerearth.com/problem/algorithm/jiyas-sequence/


        