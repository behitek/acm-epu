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
	int n,k;
	cin>>n>>k;
	pair<int,int> a[n];
	_for(i,0,n) {
		cin>>a[i].first;
		a[i].second = i + 1;
	}
	sort(a,a+n);
	
	int count = 0;
	int save = -1;
	_for(i,0,n){
		k -= a[i].first;
		if(k >= 0) count++;
		else {
			save = i;
			break;
		}
	}
	if(count == n) save = n;
	cout<<count<<endl;
	_for(i,0,save) cout<<a[i].second<<" ";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


