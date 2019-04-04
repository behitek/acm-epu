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
	int x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	int d;
	if(x1 == x2){
		d = y1 - y2;
		cout<<x1 + d<<" "<<y1<<" "<<x2 + d<<" "<<y2;
	}else if(y1 == y2){
		d = x1 - x2;
		cout<<x1<<" "<<y1 + d<<" "<<x2<<" "<<y2 + d;
	}else if(abs(x1-x2) == abs(y1-y2)){
		cout<<x2<<" "<<y1<<" "<<x1<<" "<<y2;
	}else cout<<"-1";
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


