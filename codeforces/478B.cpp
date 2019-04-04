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

LL ckn(int k,int n){
	LL a1 = 1,a2 = 1;
	_for(i,n-k+1,n+1) a1 *= i;
	_for(i,2,k+1) a2 *= i;
	return a1/a2;  
}

void solve() {
	int n,m;
	cin>>n>>m;
	int div = n / m, remain = n % m;
	cout<<remain*ckn(2,div+1) + (m - remain)*ckn(2,div)<<" "<<ckn(2,n-m+1);
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


