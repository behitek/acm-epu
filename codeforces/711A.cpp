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
	string s[n];
	int key = -1;
	_for(i,0,n) {
		cin>>s[i];
		if(key < 0) {
			if((s[i][0] == s[i][1] && s[i][0] == 'O') || 
			(s[i][3] == s[i][4] && s[i][4] == 'O')) 
				key = i;
		}
	}
	if(key == -1) cout<<"NO";
	else{
		cout<<"YES"<<endl;
		_for(i,0,n){
			if(i == key){
				cout<<s[i].replace(s[i].find("OO"),2,"++")<<endl;
			}else cout<<s[i]<<endl;
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


