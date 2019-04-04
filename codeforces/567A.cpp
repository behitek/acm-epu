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
	int n;
	cin>>n;
	int a[n];
	_for(i,0,n) cin>>a[i];
	_for(i,0,n){
		if(i == 0) cout<<a[1] - a[0] <<" "<<a[n-1] - a[0];
		else if(i == n-1) cout<<a[i] - a[n-2]<<" "<<a[i] - a[0];
		else cout<<min(a[i] - a[i-1],a[i+1] - a[i])<<" "<<max(a[n-1] - a[i],a[i] - a[0]);
		cout<<endl;
	}
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


