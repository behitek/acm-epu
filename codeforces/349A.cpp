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
	int a;
	int c25 = 0,c50 = 0,c75 = 0;
	while(n--){
		cin>>a;
		if(a == 25) c25++;
		else if(a == 50) {
			c50++,c25--;
			if(c25 < 0){
				cout<<"NO";return;
			}
		}
		else if(a == 75){
			c75++;
			if(c50 > 0) c50--;
			else c25 -= 2;
			if(c25 < 0){
				cout<<"NO";return;
			}
		}else{
			if(c75 > 0) c75--;
			else if(c50 > 0 && c25 > 0) c50 --,c25--;
			else c25 -= 3;
			if(c25 < 0){
				cout<<"NO";return;
			}
		}
	}
	cout<<"YES";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef HIEUNV
    freopen("input.txt","r",stdin);
//  freopen("output.txt","w",stdout);
    #endif
    solve();
}


