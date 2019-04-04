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
	int a[n],b[n];
	_for(i,0,n) cin>>a[i]>>b[i];
	int c = 0;
	int current = 0;
	int count = 0;
	_for(i,0,n){
		if(b[i] >= b[current]){
			while(b[i] >= b[current] && i < n){
				count += a[i]*b[current];
				i++;
			}
		}
		if(i < n){
			current = i;
			count += b[current]*a[i];
		}
	}
	cout<<count;
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


