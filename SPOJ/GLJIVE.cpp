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
	int arr[10];
	_for(i,0,10){
		cin>>arr[i];
		if(i > 0){
			arr[i]+= arr[i-1];
		}
	}
	int ans;
	int i = 0;
	while(arr[i] < 100 && i < 9) i++;
	ans = arr[i];
	if(i > 0 && ans > 100){
		ans = ((ans-100) <= (100-arr[i-1]))?ans:arr[i-1];
	}
	cout<<ans<<endl;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


