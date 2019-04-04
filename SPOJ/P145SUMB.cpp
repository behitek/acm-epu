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
	int c1 = 0,c2 = 0;
	int n,m,a,b,k;
	cin>>n>>m;
	_for(i,0,n){
		cin>>a;
		if(a == -1) c1++; 
	}
	c2 = (n-c1) << 1;
	c1 = c1 << 1;
	_for(i,0,m){
		cin>>a>>b;
		k = b-a+1;
		if(k%2 != 0){
			cout<<"0"<<endl;
		}else if(k <= c1 && k <= c2){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}	
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


