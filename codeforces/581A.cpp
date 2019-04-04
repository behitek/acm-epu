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
	int a,b;
	cin>>a>>b;
	int c1(0),c2(0);
	while(a > 0 || b > 0){
		if(a > 0 && b > 0){
			c1++;
			a--;
			b--;
		}else{
			if(a > 1){
				c2++;
				a -= 2;
			}else if(b > 1){
				c2++;
				b -= 2;
			}else break;
		}
	}
	cout<<c1<<" "<<c2;
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


