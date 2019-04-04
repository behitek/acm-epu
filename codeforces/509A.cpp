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

int a[10][10];

int get(int i,int j){
	if(i == 0 || j == 0) return 1;
	return a[i][j];
}

void solve() {
	int n;
	cin>>n;
	if(n==1){
		cout<<1;
		return;
	}
	_for(i,1,n){
		_for(j,1,n){
			a[i][j] = get(i-1,j) + get(i,j-1);
		}
	}
	cout<<a[n-1][n-1];
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


