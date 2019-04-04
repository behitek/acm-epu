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
	int n,m;
	cin>>n>>m;
	map<string,string> a;
	string s1,s2;
	_for(i,0,m){
		cin>>s1>>s2;
		a[s1] = s2;
	}
	string s[n];
	_for(i,0,n) cin>>s[i];
	_for(i,0,n){
		cout <<(s[i].length() > a[s[i]].length() ? a[s[i]] : s[i])<<" ";
	}
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


