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


/*
	If there still exist at least one 0 and at least one 1 in the string then there obviously exists either substring 01 or substring 10 (or both) and we can remove it. The order in which we remove substrings is unimportant: in any case we will make min(#zeros,?#ones) such operations. Thus the answer is #ones?+?#zeros?-?2min(#ones,?#zeros)?=?|#ones?-?#zeros|.
*/

void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int o(0),z(0);
	_for(i,0,s.length()){
		if(s[i] == '1') o++;
		else z++;
	}
	cout<<abs(z-o);
	
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


