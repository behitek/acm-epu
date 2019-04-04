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
	int n,a,b;
	cin>>n;
	int arr[n];
	_for(i,0,n) arr[i] = i+2;
	int i1,i2,ii = 0;
	while(1){
		cout<<(++ii)<<": ";
		_for(i,0,n) cout<<arr[i];
		cout<<endl;
		i1 = n - 2;
		while(i1 >= 0 && arr[i1] > arr[i1+1]) --i1;
		if(i1 == -1) return;
		i2 = n-1;
		while(arr[i2] < arr[i1]) i2--;
		swap(arr[i1],arr[i2]);
//		a = i1+1;b = n-1;
//		while(a < b){
//			swap(arr[a],arr[b]);
//			a++;
//			b--;
//		}
//	or
	sort(arr+i1+1,arr+i1+1+(n-i1-1));
	}
}	

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	//freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


