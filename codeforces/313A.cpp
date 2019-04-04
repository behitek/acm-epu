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
	if(s[0] != '-') cout<<s;
	else{
		if(s[s.length()-1] > s[s.length()-2]){
			_for(i,0,s.length()-1) cout<<s[i];
		}else{
			
			if(s.length() == 3 && s[2] == '0') cout<<s[2];
			else{
				_for(i,0,s.length()-2) cout<<s[i];
				cout<<s[s.length()-1];
			} 
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


