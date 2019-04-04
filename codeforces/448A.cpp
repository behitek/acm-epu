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
	int a1,a2,a3,b1,b2,b3;
	cin>>a1>>a2>>a3>>b1>>b2>>b3;
	int n;
	cin>>n;
	int a = a1+a2+a3;
	int b = b1+b2+b3;
	if(a % 5 == 0){
		n -= a/5;
		n -= (b%10 ==0) ? b/10 : (b/10 + 1);
	}else {
		n -= (b % 10 == 0) ? b/10 : b/10 + 1;
		n -= (a%5 ==0) ? a/5 : (a/5 + 1);
	}
	if(n >=0) cout<<"YES";
	else cout<<"NO";
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


