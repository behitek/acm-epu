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
	bool check = false;
	_for(i,1,s.length()){
		if(s[i] == 'A' && s[i-1] == 'B'){
			i+= 2;
			for(;i < s.length();i++){
				if(s[i] == 'B' && s[i-1] == 'A') check = true;
			}
		}
	}
	_for(i,1,s.length()){
		if(s[i] == 'B' && s[i-1] == 'A'){
			i+= 2;
			for(;i < s.length();i++){
				if(s[i] == 'A' && s[i-1] == 'B') check = true;
			}
		}
	}
	cout<< (check == true ? "YES" : "NO");
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


