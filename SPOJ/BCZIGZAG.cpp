#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long x=0,y=0;
    long long total=0;
    for(int i=0;i<k;i++)
    {
     char temp;
     cin>>temp;
 
     long long res,len,test;
     if(temp=='U')x=x-1;
     if(temp=='D')x=x+1;
     if(temp=='L')y=y-1;
     if(temp=='R')y=y+1;
     if((x+y)&1)
     {
         if((x+y)<n)
         {
          res = (x+y)*(x+y+1)/2 + 1;
          res = res + x;
          total+=res;
         }
         else
         {
              res = (x+y)*(x+y+1)/2 - ((x+y-n)*(x+y-n+1)) + 1;
              res = res + n -1 - y;
             total+=res;
         }
     }
     else
     {
         if((x+y)<n)
         {
          res = (x+y)*(x+y+1)/2 + 1;
          res = res + y;
          total+=res;
         }
         else
         {
              res = (x+y)*(x+y+1)/2 - ((x+y-n)*(x+y-n+1)) + 1;
              res = res + n - 1 - x;
              total+=res;
         }
     }
    }
    cout<<total+1<<endl;
 
}
