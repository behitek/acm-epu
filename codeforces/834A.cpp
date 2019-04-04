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
	getline(cin,s);
	int t;
	cin>>t;
	t = t % 4;
	char l = s[0],r = s[0];
	while(t--){
		if(l == '^') l = '<';
		else if(l == '>') l = '^';
		else if(l == '<') l = 'v';
		else if(l == 'v') l = '>';
		
		if(r == '>') r = 'v';
		else if(r == '<') r = '^';
		else if(r == '^') r = '>';
		else if(r == 'v') r = '<';
	}
	if(l == s[2] && r != s[2]) cout<<"ccw";
	else if(r == s[2] && l != s[2]) cout<<"cw";
	else cout<<"undefined";
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


