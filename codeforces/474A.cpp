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

string a = "qwertyuiop";
string b = "asdfghjkl;";
string c = "zxcvbnm,./";

char get(char ch,int d){
	int r = a.find(ch);
	if(r >= 0){
		if(d == -1 && r == 9) return a[0];
		else if(d == 1 && r == 0) return a[9];
		else return a[r-d];
	}
	
	r = b.find(ch);
	if(r >= 0){
		if(d == -1 && r == 9) return b[0];
		else if(d == 1 && r == 0) return b[9];
		else return b[r-d];
	}
	
	r = c.find(ch);
	if(r >= 0){
		if(d == -1 && r == 9) return c[0];
		else if(d == 1 && r == 0) return c[9];
		else return c[r-d];
	}
	
}

void solve() {
	char c;
	cin>>c;
	string s;
	cin>>s;
	if(c == 'R'){
		_for(i,0,s.length()){
			cout<<get(s[i],1);
		}
	}else{
		_for(i,0,s.length()){
			cout<<get(s[i],-1);
		}
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


