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

LL arr[1005];
int n;

/*Use bottom - up approach*/

void solve() {
	cin>>n;
	_for(i,0,n){
		cin>>arr[i];
	}
	arr[1] = max(arr[1],arr[0]);
	_for(i,2,n){
		arr[i] = max(arr[i-1],arr[i] + arr[i-2]);
	}
	cout<<arr[n-1]<<endl;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,ii = 0;
    cin>>t;
    while(t--){
    	cout<<"Case "<<(++ii)<<": ";
    	solve();
	}
}


