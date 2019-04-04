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
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	if(n < m){
		if(n*a < b){
			cout<<n*a;
		}else cout<<b;
	}else{
		if(n == m) cout<<min(n*a,b);
		else{
			if(n%m == 0){
				cout<<min((n/m)*b,n*a);
			}else{
				cout<<min(n*a,min(n/m*b + n%m*a, (n/m+1)*b));
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


