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

//bool arr[100];

bool snt(int a){
	_for(i,2,sqrt(a)+1){
		if(a%i == 0) return 0;
	}
	return 1;
}

void solve() {
//	memset(arr,true,sizeof(arr));
//	int i = 2,k = 2;
//	while(i < 55){
//		while(arr[i] == false) ++i;
//		while(k*i < 55){
//			arr[k*i] = false;
//			k++;
//		}
//		++i;
//	}
	int x,y;
	cin>>x>>y;
//	_for(i,x+1,y){
//		if(arr[i] == true){
//			cout<<"NO\n";
//			return;
//		}
//	}
//	if(arr[y]) cout<<"YES\n";
//	else cout<<"NO\n";
	
	for(int i = x+1;i < y;i++){
		if(snt(i)){
			cout<<"NO";
			return;
		}
	}
	if(snt(y)) cout<<"YES";
	else cout<<"NO";
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


