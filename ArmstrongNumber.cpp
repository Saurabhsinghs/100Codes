// Example = 407 (order/length = 3)
// 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
#include<bits/stdc++.h>
using namespace std;
bool Armstrong(int n)
{
    int len=0, sum=0;
    int num=n;
     int num1=n;
    while(n>0)
    {
        len++;
        n=n/10;
    }
   
    while(num1>0)
    {
      int rem=num1%10;
      sum+=pow(rem,len);
      num1=num1/10;
    }
    return (sum==num);
}
int main()
{
    int n;//98745112
    cin>>n;
    cout<<Armstrong(n);
}