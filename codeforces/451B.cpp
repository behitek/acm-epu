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
	_for(i,0,n) {
		cin>>a[i];
		b[i] = a[i];
	}
	int s(0),e(n-1);
	int i = 1;
	for(;i < n;i++){
		if(a[i] < a[i-1]) {
			s = i - 1;
			break;
		}
	}
	for(;i < n;i++){
		if(a[i] > a[i-1]) {
			e = i - 1;
			break;
		}
	}
	sort(a,a+n);
	sort(b+s,b+e+1);
	_for(i,0,n){
		if(a[i] != b[i]) {
			cout<<"no";
			return;
		}
	}
	cout<<"yes"<<endl;
	cout<<s+1<<" "<<e+1;
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


