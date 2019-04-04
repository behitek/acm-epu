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
	int count = 1,max = 0;
	int arr[n];
	_for(i,0,n){
		cin>>arr[i];
		if(i > 0 && arr[i] >= arr[i-1]) count++;
		else if(i > 0){
			if(count > max){
				max = count;
			}
			count = 1;
		}
	}
	if(count > max){
		max = count;
		count = 1;
	}
	cout<<max;
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



