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

bool can(int m, int s){
	return s >= 0 && s <= 9 * m;
}

void solve() {
	int m,s;
	cin>>m>>s;
	if(m > 1 && s == 0 || s > m*9){
		cout<<"-1 -1";return;
	}
	
	string minn,maxn;
	
	int sum = s;
    for (int i = 0; i < m; i++){
    	for (int d = 0; d < 10; d++){
    		if ((i > 0 || d > 0 || (m == 1 && d == 0)) && can(m - i - 1, sum - d)){
                minn += char('0' + d);
                sum -= d;
                break;
            }
		}
	}
	cout<<minn<<" ";
	sum = s;
    for (int i = 0; i < m; i++){
    	for (int d = 9; d >= 0; d--){
    		if (can(m - i - 1, sum - d)){
                maxn += char('0' + d);
                sum -= d;
                break;
            }
		}
	}
	cout<<maxn;
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


