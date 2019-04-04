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
	char c[n];
	memset(c,'0',n);
	int i = n - 1;
	if(n == 0){
		cout<<0<<endl;
		return;
	}
	while(1){
		c[n] = '\0';
		cout<<c<<endl;
		_fod(i,n-1,-1){
			if(c[i] == '0'){
				c[i] = '1';
				memset(c+i+1,'0',n-i-1);
				break;
			}else if(i == 0){
				return;
			}
		}
	}
}

int main(){
//    #ifdef HieuNguyen
//    freopen("input.txt","r",stdin);
//	freopen("output.txt","w",stdout);
//    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}


