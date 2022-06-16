#include<bits/stdc++.h>
using namespace std;
bool Check(int n)
{
  if(n>0)return true;
  else return false;
}
int main()
{
   int n;
   cin>>n;
   if(Check(n))
   {cout<<"Number is Positive";}
    else
    {cout<<"Number is Negative";}
}