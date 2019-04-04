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
	int a[n];
	int sum = 0;
	_for(i,0,n){
		cin>>a[i];
		sum += a[i];
	}
	if(sum == n){
		cout<<sum-1;
		return;
	}
	int max = sum;
	_for(i,0,n){
		_for(j,0,i+1){
			int sum1 = sum;
			_for(t,j,i+1){
				if(a[t] == 0) sum1++;
				else sum1--;	
			}
		if(sum1 > max) max = sum1;
		}
	}
	cout<<max;
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
