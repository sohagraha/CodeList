#include<bits/stdc++.h>
using namespace std;


int main()
{
    long long int sum= 0,res=0,total=0;
    string str;
    cin >> str;
    char ch;
    for(int i =0; i<str.length();i++)
    {
      ch = str[i];
      if(ch >= 'a' && ch <= 'z')
      {
        sum = int(ch);
        sum = sum-32;
        total = total+sum;
      }
      else
      {
        sum = int(ch);
        sum = sum+32;
        total = total-sum;
      }
    }
    if(total<0){
      total = total * (-1);
    }
    for(int i=2;i<total;i++)
    {
      if(total%i==0)
      {
        res++;
      }
    }
    if(res == 0)
    {
      cout << 1 << endl;
    }
    else
      cout << 0 << endl;
    return 0;
}


        
// Monk and his love for Primes
// https://www.hackerearth.com/problem/algorithm/monk-and-his-love-for-primes/