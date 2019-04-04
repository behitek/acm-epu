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

char in[505][505];

void solve() {
	int r,c,a,b;
	cin>>r>>c>>a>>b;
	/*Input*/
	_for(i,0,r) _for(j,0,c){
		cin>>in[i][j];
	}
//	_for(i,0,r){
//		_for(j,0,c){
//			cout<<in[i][j];
//		}
//		cout<<"\n";
//	}
	/*Solve*/
	_for(i,0,r){
		_for(ii,0,a){
			_for(j,0,c){
				_for(jj,0,b){
					cout<<in[i][j];
				}
			}
			cout<<"\n";
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


