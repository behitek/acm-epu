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
	vector<int> a,b,c;
	int t;
	_for(i,0,n){
		cin>>t;
		if(t == 1) a.push_back(i+1);
		if(t == 2) b.push_back(i+1);
		if(t == 3) c.push_back(i+1);
	}
	int count = 0;
	int val = min(a.size(),min(b.size(),c.size()));
	cout<<val<<endl;
	if(val == 0) {
		return;
	}
	while(val > 0){
		cout<<a.back()<<" "<<b.back()<<" "<<c.back()<<endl;
		a.pop_back();b.pop_back();c.pop_back();
		val = min(a.size(),min(b.size(),c.size()));
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


