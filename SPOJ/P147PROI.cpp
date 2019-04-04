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
	int n,m,x,y;
	cin>>n>>m;
	int a[n],b[m];
	_for(i,0,n+1) cin>>a[i];
	_for(i,0,m+1) cin>>b[i];
	if(n > m){
		if(a[0]*b[0] < 0) cout<<"-Infinity"<<endl;
		else cout<<"Infinity"<<endl;
	}else if(n < m){
		cout<<"0/1"<<endl;
	}else{
		x = a[0];
		y = b[0];
		int ucln = __gcd(x,y);
		x /= ucln;
		y /= ucln;
		cout<<x<<"/"<<y<<endl;
	}
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


