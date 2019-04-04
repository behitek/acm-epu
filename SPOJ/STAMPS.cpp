#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,n,val,caseCount=0;
   scanf("%d",&t);
   while(t--)
   {
      caseCount++;
      scanf("%d%d",&val,&n);	
      int arr[n];
      for(int i=0 ; i<n ; ++i)
         scanf("%d",&arr[i]);
      sort(arr,arr+n);
      int i=n-1,sum=0;
      for(; i>=0 ; --i)
      {
         if(sum>=val)
            break;
         sum+=arr[i];
      }	
      if(sum>=val)
         printf("Scenario #%d:\n%d\n",caseCount,n-1-i);
      else	
         printf("Scenario #%d:\nimpossible\n",caseCount);
   }
   return 0;
}
