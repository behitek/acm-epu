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

#define MAX 1000006

int prime[MAX];

void initPrime(){
	__(prime);
	int i = 2;
	int k = 2;
	while(i < MAX){
		prime[i] = 1;
		while(i*k < MAX){
			prime[i*k] = -1;
			k++;
		}
		while(prime[i] != 0) i++;
		k = 2;
	}
}

bool check(ULL a){
	double ans = sqrt(a);
	if(ans == (int)ans){
		if(prime[(int)ans] == 1) return true;
	}
	return false;
}

void solve() {
	int n;
	cin>>n;
	ULL a[n];
	_for(i,0,n) cin>>a[i];
	
	initPrime();
	
	_for(i,0,n){
		if(check(a[i])) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

int main(){
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


