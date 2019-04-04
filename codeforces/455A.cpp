#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve() {
	int MAX = 100001;
	ULL c[MAX];
	ULL dp[MAX];
	__(c);
	int n;
	cin>>n;
	int temp;
	_for(i,0,n){
		cin>>temp;
		c[temp]++;
	}
	dp[0] = 0;
	dp[1] = c[1];
	_for(i,2,MAX){
		dp[i] = max(dp[i-1],i*c[i] + dp[i-2]);
	}
	cout<<dp[MAX-1];
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


