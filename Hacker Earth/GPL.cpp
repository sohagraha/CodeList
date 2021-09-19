#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while(t--)
  {
   long long int tt;
   cin >> tt;
   string str;
   cin >> str;
   long long int result = 0,ii=1;
   for(int i = str.size()-1;i>=0;--i)
   {
      int bd = str[i] - '0';
      result = result + (bd * ii);
      ii = ii*2;
   }
   cout << result << endl;
  }
}

// GPL
// https://www.hackerearth.com/problem/algorithm/gpl/

        