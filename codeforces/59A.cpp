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
	string s;
	cin>>s;
	int u(0),l(0);
	_for(i,0,s.length()){
		if(s[i] >= 97) l++;
		else u++;
	}
	if(l >= u){
		_for(i,0,s.length()) if(s[i] < 97) s[i] += 32;
	}else{
		_for(i,0,s.length()) if(s[i] >= 97) s[i] -= 32;
	}
	cout<<s;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HIEUNGUYEN
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}




