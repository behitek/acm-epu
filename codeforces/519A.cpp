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

int a[255];

void init(){
	a['q'] = 9;
	a['r'] = 5;
	a['b'] = 3;
	a['n'] = 3;
	a['p'] = 1;
}

void solve() {
	string s,t;
	int b(0),w(0);
	_for(i,0,8){
		cin>>t;
		s += t;
	}
	
	init();
	
	_for(i,0,s.length()){
		if(s[i] == '.') continue;
		if(s[i] < 97){
			w += a[s[i]+32];
		}else{
			b += a[s[i]];
		}
	}
	if(b == w) cout<<"Draw";
	else if(b > w) cout<<"Black";
	else cout<<"White";
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


