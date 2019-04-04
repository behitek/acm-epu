#include<iostream>
#define f(i,n) for(i=0;i<n;++i)
using namespace std;main(){int t,n,a[100][100],i,j;cin>>t;while(t--){cin>>n;f(i,n) f(j,i+1)cin>>a[i][j];for(i=n-2;i>=0;i--) f(j,i+1)a[i][j] += max(a[i+1][j],a[i+1][j+1]);cout<<a[0][0]<<endl;}}


