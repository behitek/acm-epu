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

int arr[10000];

void solve() {
	int a,b;
	cin>>a>>b;
	int uc = __gcd(a,b);    
	int u = 0,i = 2;
	arr[u++] = uc;
	while(i <= uc/2){
		if(uc%i == 0)
			arr[u++] = uc/i;
		i++;
	}
	arr[u++] = 1;
	int m,l,r,isTrue;
	cin>>m;
	while(m--){
		isTrue = 0;
		cin>>l>>r;
		for(int i = 0;i < u;i++){
			if(l > arr[i]) break;
			if(r >= arr[i] && l <= arr[i]){
				isTrue = 1;
				cout<<arr[i]<<endl;
				break;
			}
		}
		if(isTrue == 0){
			cout<<-1<<endl;
		}
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


