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
	int maxn = 1;
	int save = -1;
	_for(i,0,s.length()){
		if(s[i] == 'A' || s[i] == 'O' || s[i] == 'E'
		|| s[i] == 'Y' || s[i] == 'I' || s[i] == 'U'){
			if(save == -1){
				save = i;
				maxn = max(maxn,i+1);
			}
			else{
				maxn = max(maxn,i - save);
				save = i;
			}
		}
	}
	int l = s.length() - save;
	cout<<(save == -1 ? (s.length() + 1) : max(l,maxn));
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


