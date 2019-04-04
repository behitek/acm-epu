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
	string s;
	cin>>s;
	bool flag = false;
	vector<int> v;
	int a(0);
	_for(i,0,s.length()){
		if(s[i] == 'W'){
			if(a != 0) v.push_back(a);
			a = 0;
		}else{
			a++;
		}
	}
	if(a != 0) v.push_back(a);
	cout<<v.size()<<endl;
	_for(i,0,v.size()) cout<<v[i]<<" ";
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


