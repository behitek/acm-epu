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
	int arr[m];
	_for(i,0,m) cin>>arr[i];
	sort(arr,arr+m);
	int start = 0,minVal = 999999;
	_for(i,0,m){
		if(i+n-1 >= m) break;
		if(i == 0){
			minVal = arr[i+n-1] - arr[i];
		}else{
			if(arr[i+n-1] - arr[i] < minVal) minVal = arr[i+n-1] - arr[i];
		}
	}
	cout<<minVal;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef _WIN32
//    freopen("input.txt","r",stdin);
//  	freopen("output.txt","w",stdout);
    #endif
    solve();
}


