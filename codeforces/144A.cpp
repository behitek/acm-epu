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
	int arr[n];
	int max,min,maxI,minI;
	_for(i,0,n){
		cin>>arr[i];
		if(i == 0){
			max = arr[0];
			min = arr[0];
			maxI = 0;
			minI = 0;
		}else{
			if(arr[i] > max){
				max = arr[i];
				maxI = i;
			}
			if(arr[i] <= min){
				min = arr[i];
				minI = i;
			}
		}
	}
	if(maxI < minI){
		cout<<maxI + n-1-minI;
	}else{
		cout<<maxI + n-2-minI;
	}
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifdef HieuNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}




