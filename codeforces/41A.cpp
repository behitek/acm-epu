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
	string s1,s2;
	cin>>s1>>s2;
	_for(i,0,s1.length()){
		if(s1[i] != s2[s1.length()-i-1]){
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef _WIN32
//    freopen("input.txt","r",stdin);
//  	freopen("output.txt","w",stdout);
    #endif
    solve();
}



