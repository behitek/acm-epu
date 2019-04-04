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

void solve(){
	int n;
    cin>>n;
    int a[n+5];
    for(int i = 0;i < n;i++) cin>>a[i];
    string str;
    cin>>str;
    int ii = 0;
    int m = 0;
    for(int i = 0;i < str.length();i++){
    		m += (int)(str[i] - '0')*pow(2,ii);
		ii++;
	}
	LL ans = 0,sum;
	int xx,z;
	//m = pow(2,m) - 1;
	while(m > 0){
		z = m,sum = 0,xx = 0;
		while(z > 0){
			sum += (z%2)*a[xx];
			z /= 2;
			xx++;
		}
		if(sum > ans) ans = sum;
		m--;
	}
	cout<<ans;
}

int main(){
    #ifdef HieuNguyen
    freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(0);
    solve();
}

