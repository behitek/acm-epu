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
	int a[n],b[n];
	_for(i,0,n){
		cin>>a[i];
		b[i] = a[i];
	}
	sort(b,b+n,greater<int>());
	int c[3000],index = 1;
	_for(i,0,n){
		if(i == 0) c[b[i]] = 1;
		else{
			if(b[i] != b[i-1]) index = i+1;
			c[b[i]] = index;
		}
	}
	_for(i,0,n) cout<<c[a[i]]<<" ";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


