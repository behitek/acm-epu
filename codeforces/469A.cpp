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
	bool check[n+1];
	__(check);
	int a,b;
	cin>>a;
	_for(i,0,a){
		cin>>b;
		check[b] = 1;
	}
	cin>>a;
	_for(i,0,a){
		cin>>b;
		check[b] = 1;
	}
	_for(i,1,n+1){
		if(!check[i]){
			cout<<"Oh, my keyboard!";
			return;
		}
	}
	cout<<"I become the guy.";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HieuNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}




