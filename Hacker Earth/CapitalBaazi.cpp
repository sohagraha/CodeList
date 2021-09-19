#include <bits/stdc++.h>
using namespace std;

char upperCase(char c)
{
   char ch;
   ch = c-32;
   return ch;
}

int main()
{
   while(true)
   {
      string s;
      cin >> s;
      if(s.size() == 0)
      {
         break;
      }
      for(int i =0 ;i <s.size(); ++i)
      {
         s[i]=upperCase(s[i]);
         cout << s[i];
      }
      cout << endl;
   }
}

// CapitalBaazi
//https://www.hackerearth.com/problem/algorithm/capitalbaazi/


        