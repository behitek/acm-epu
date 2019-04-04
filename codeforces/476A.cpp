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
	int n,m;
	cin>>n>>m;
	if(n < m) cout<<"-1";
	else{
		int val = n/2;
		int i = (n % (2*m) == 0) ? n /(2*m) : n /(2*m) +1;
		while(i*m < val) i++;
		val = i*m;
		
		int x = 1;
		int y = n - 2*x;
		while(x + y != val){
			x++;
			y = n - 2*x;
		}
		cout<<x+y;
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


