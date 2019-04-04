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
	int m;
	string s;
	cin >> s;
	scanf("%d", &m);
	int a[100005];
	a[0] = 0;
	_for(i,0,s.length()){
		a[i] = a[i - 1] + (s[i] == s[i - 1]);
	}
	int l, r;
	while (m--){
		scanf("%d%d", &l,&r);
		printf("%d\n", a[r-1] - a[l-1]);
	}
}

int main(){
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}

