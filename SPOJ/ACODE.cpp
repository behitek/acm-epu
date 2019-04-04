#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	char str[5005];
	cin>>str;
 while(str[0] != '0'){
		unsigned long long int dp[5010];
		long long int len=strlen(str);
		memset(dp,0,5010);
		dp[0]=1;
		long long int x,i;
		for(i=1;i<=len-1;i++){
   			x=(str[i-1]-'0')*10+(str[i]-'0');
        	if(str[i]-'0')
        		dp[i]=dp[i-1];
        	if(x>=10 && x<=26)
        		dp[i]+=dp[(i-2)<0?0:i-2];
 			}
 		cout<<dp[len-1]<<endl;
 		cin>>str;
	}
}
