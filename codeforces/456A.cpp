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

struct computer{
	int pr;
	int qu;
	bool operator< (computer n){
		return pr < n.pr;
	}
};

void solve() {
	int n;
	cin>>n;
	computer a[n];
	_for(i,0,n) cin>>a[i].pr>>a[i].qu;
	sort(a,a+n);
	int rs = (a[1].pr - a[0].pr)*(a[1].qu - a[0].qu);
	_for(i,0,n-1)
		if(a[i].qu > a[i+1].qu) {
			cout<<"Happy Alex";
			return;
		}
	cout<<"Poor Alex";
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


