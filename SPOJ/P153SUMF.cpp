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

char toLower(char c){
	if(c >= 'A' && c <= 'Z') c += 32;
	return c;
}

void solve() {
	map<char,int> m;
	int n;
	cin>>n;
	string s;
	cin>>s;
	_for(i,0,n){
		s[i] = toLower(s[i]);
		m[s[i]]++;
	}
	for(char i = 'a';i <= 'z';i++){
		if(m[i] == 0){
			cout<<"NO";
			return;
		}
	}
	cout<<"YES";
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


