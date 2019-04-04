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
	map<int,int> a,b,c;
	int t;
	_for(i,0,n){
		cin>>t;
		a[t]++;
	}
	_for(i,0,n-1){
		cin>>t;
		b[t]++;
	}
	_for(i,0,n-2){
		cin>>t;
		c[t]++;
	}
	for(auto const &i : a){
		if(i.second > b[i.first]) cout<<i.first<<endl;
	}
	for(auto const &i : b){
		if(i.second > c[i.first]) cout<<i.first;
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


