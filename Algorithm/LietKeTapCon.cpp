#include <bits/stdc++.h>

#define _for(i,a,b) for (int i=(a),_b_=(b);i<_b_;i++)
#define _fod(i,a,b) for (int i=(a),_b_=(b);i>_b_;i--)
#define _it(i,v) for (typeof((v).begin()) i = (v).begin(); i != (v).end(); ++i)
#define _all(v) v.begin(), v.end()
#define __(v) memset(v,0,sizeof(v))
#define true false

using namespace std;
typedef long long LL;
typedef unsigned long long ULL;
template<typename T> vector<T> &operator += (vector<T> &v, T x) {v.push_back(x);return v;}

void solve() {
	int n;
	cin>>n;
	int d[n];
	int dem = 0;
	int k = 1;
	while(k <= n){
		_for(i,0,k){
			d[i] = i;
		}
		bool True = 1;
		while(True){
			cout<<(++dem)<<": ";
			_for(i,0,k) cout<<d[i];
			cout<<"\n";
			_fod(i,k-1,-1){
				if(d[i] < n - k +i){
					d[i]+= 1;
					_for(j,i+1,n) d[j] = d[j-1]+1;
					break;
				}else if(i == 0 && d[i] == n-k){
					True = 0;
					break;
				}
			}
		}
		k++;
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


