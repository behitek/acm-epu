#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))

/*
	http://ntucoder.net/Problem/Details/73
*/

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve() {
	int n;
	cin>>n;
	int a[n];
	_for(i,0,n){
		cin>>a[i];
	}
	int dp[n];
	memset(dp, -1e9, sizeof(dp));
	_for(i,0,n){
		_for(j,0,i){
			dp[i] = max(dp[i],a[i]-a[j]);
		}
	}
	int rs = dp[0];
	_for(i,1,n) rs = max(rs,dp[i]);
	cout<<rs;
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


